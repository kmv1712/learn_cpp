#include <iostream>
#include <string>
using namespace std;
int main()
{
    string words = "main";
    string* pStr = &words;

    cout << "Символы:" <<  pStr -> size() << endl;
    return 0;
}

