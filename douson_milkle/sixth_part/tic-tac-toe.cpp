// Программа Крестики-нолики
// Компьютер играет в "Крестики-нолики" против пользователя
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// глобальные константы
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';
// прототипы функции
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);
// функция main
int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY);
    instructions();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);
    while (winner(board) == NO_ONE)
    {
        if (turn == human)
        {
            move = humanMove(board, human);
            board[move] = human;
        }
	else
	{
            move = computerMove(board, computer);
            board[move] = computer;
        }
	
        displayBoard(board);
        turn = opponent(turn);
    }
    announceWinner(winner(board), computer, human);
    return 0;
}

void instructions()
{
    cout << "Добро пожаловать в игру крестики нолики\n";
    cout << "Сделайте свой ход от 0 до 8\n";
    cout << "Даные числа соответсвуют следующей позиции на доске\n";
    cout << " 0 | 1 | 2\n";
    cout << "----------\n";
    cout << " 3 | 4 | 5\n";
    cout << "----------\n";
    cout << " 6 | 7 | 8\n";
}

char askYesNo(string question)
{
    char response;
    do
    {
        cout << question << " (y/n): ";
        cin >> response;
    } while (response != 'y' && response != 'n');
    return response;
}

int askNumber(string question, int high, int low)
{
    int number;
    do
    {
        cout << question << "(" << low << " - " << high << "): ";
        cin >> number;
    } while((number > high) || (number < low));
    return number;
}

char humanPiece()
{
    char go_first = askYesNo("Вы хотите пойти первым?\n");
    if (go_first == 'y')
    {
        cout << "\nВы ходите первым\n";
        return X;
    }
    else
    {
        cout << "\nВы ходите вторым\n";
        return O;
    }
}

char opponent(char piece)
{
    if (piece == X)
    {
        return O;
    }
    else
    {
        return X;
    }
}

void displayBoard(const vector<char>& board)
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "--------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t" << "--------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
}

char winner(const vector<char>& board)
{
// все возможные выйгрышные ряды
const int WINNING_ROWS[8][3] = { {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},
    {2, 4, 6} };
    const int TOTAL_ROWS = 8;
    // если в одном из выйгрышных рядов уже присутсвует три одинаковых значения
    // (причем они не равны EMPTY), то победитель определился
    for (int row = 0; row < TOTAL_ROWS; ++row)
    {
        if( (board[WINNING_ROWS[row][0]] != EMPTY) && (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) && (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]))
        {
            return board[WINNING_ROWS[row][0]];
        }
    }

    // поскольку победитель не опредилился, проверяем, не наступила ли ничья
    // (остались ли на поле пустые клетки)
    if (count(board.begin(), board.end(), EMPTY) == 0)
        return TIE;
    // Поскольку победитель не определился, но ничья еще не наступила,
    // Игра продолжается
        return NO_ONE;
    }

inline bool isLegal(int move, const vector<char>& board)
{
	return (board[move] == EMPTY);
}

int humanMove(const vector<char>& board, char human)
{
	int move = askNumber("\nКуда вы ходите? ", (board.size() - 1));
	while (!isLegal(move, board))
	{
		cout << "\nПоле уже занято\n";
		move = askNumber("\nКуда вы ходите? ", (board.size() - 1));
	}
	cout << "\nХорошо..\n";
	return move;
}

int computerMove(vector<char> board, char computer)
{
	unsigned int move = 0;
	bool found = false;
	// если компьютер может выйграть следующим ходом, то он делает этот ход
	while (!found && move < board.size())
	{
		if (isLegal(move, board))
		{
			board[move] = computer;
			found = winner(board) == computer;
			board[move] = EMPTY;
		}
		if(!found)
		{
			++move;
		}
	}
	if (!found)
	{
		move = 0;
		char human = opponent(computer);
		while (!found && move < board.size())
		{
			if (isLegal(move, board))
			{
				board[move] = human;
				found = winner(board) == human;
			        board[move] = EMPTY;
			}
			if (!found)
			{
				++move;
			}
		}
	}
	if (!found)
	{
		move = 0;
		unsigned int i = 0;
		const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
		// выбрать оптимальную свободную клутку
		while (!found && i < board.size())
		{
			move = BEST_MOVES[i];
			if (isLegal(move, board))
			{
				found = true;
			}
			++i;
		}
	}
	cout << "\nКомпьютер занял поле номер\n" << move << endl;
	return move;
}	

void announceWinner(char winner, char computer, char human)
{
	if(winner == computer)
	{
		cout << winner << "\nПобедил копьютер\n";
	}
	else if (winner == human)
	{
		cout << winner << "\nПобедил человек\n";
	}
	else 
	{
		cout << "\nНичья\n";
	}
}
			

