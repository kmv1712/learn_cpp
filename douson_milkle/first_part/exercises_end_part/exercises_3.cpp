#include <iostream>
using namespace std;

int main(){
    int point1 = 0, point2 = 0, point3 = 0;
    cout << "Введите Число" << endl;
    cin >> point1;
    cout << "Введите Число" << endl;
    cin >> point2;
    cout << "Введите Число" << endl;
    cin >> point3;
    cout << "Среднее число:" << (point1 + point2 + point3) / 3 << endl;
    return 0;
}
