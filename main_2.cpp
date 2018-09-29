#include <iostream>

using namespace std;
int f1 (int x)
{
    int a = x /100;
    if (a==9)
    return 9;
    else
    return 0;

}
int main()
{
    int muv = f1 (956);
    if (muv == 9){
    cout << "thislo nathin 9" << endl;
    }
    else{
    cout << "thislo ne nathin 9" << endl;
    }
    return 0;
}
