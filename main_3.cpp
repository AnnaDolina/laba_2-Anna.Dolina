#include <iostream>

using namespace std;
int f1 (int x)
{
    int a = x % 4;
    if (a==0)
    return true;
    else
    return false;

}
int main()
{
    int muv = f1 (953);
    if (muv == true)
        {
    cout << "cratno 4 " << endl;
    }
    else{
    cout << "ne cratno 4" << endl;
    }
    return 0;
}
