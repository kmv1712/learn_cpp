#include <iostream>
using namespace std;
int main()
{
    int myPoint = 1500;
    cout << "myPoint" << myPoint << endl;
    int& mikePoint = myPoint;
    cout << "mikePoint" << mikePoint << endl;
    int kiraPoint = 2500;
    cout << "kirePoint" << kiraPoint << endl;
    mikePoint = kiraPoint;
    cout << "mikePoint равен kiraPoint и myPoint равен: " << myPoint <<  endl;
    const int& fixMyPoint = myPoint;
    cout << "fixMyPoint = " << fixMyPoint << endl;
    //fixMyPoint = kiraPoint;
    //cout << "fixMyPoint = kiraPoint myPoint = " << myPoint << endl;
    return 0;
}   

