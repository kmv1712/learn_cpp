#include <iostream> 
using namespace std;
class Critter
{
    public:
        int GetHunger() const {return m_Hunger;}
    private:
        int m_Hunger;
};
int main()
{
    Critter crit;
    cout << crit.GetHunger() << endl;
    return 0;
}
