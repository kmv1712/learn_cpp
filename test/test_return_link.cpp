#include <iostream>
#include <vector>
#include <string>
using namespace std;
string& getLink(vector<string>& inventory);
int main()
{   
    vector<string> inventory;
    inventory.push_back("test1");
    inventory.push_back("test2");
    inventory.push_back("test3");
    string& rStr = getLink(inventory);
    cout << rStr;
}
     

string& getLink(vector<string>& vec)
{   
    return vec[1];
}
