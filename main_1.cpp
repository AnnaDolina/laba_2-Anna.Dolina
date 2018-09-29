#include <iostream>

using namespace std;
int f1 (int x)
{
int a = x / 10;
int d = x % 10;
int c = a % 10;
int b = a / 10;
return d*b*c;
}
int main()
{
int muv=f1(123);
cout « muv « endl;
return 0;
}
