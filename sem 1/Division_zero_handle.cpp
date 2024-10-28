
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cout << "ENter the number a :- " << endl;
    cin >> a;
    cout << "ENter the number b :- " << endl;
    cin >> b;

    if (b == 0)
    {
        cout << "B can not be Zero ! invalid " << endl;
    }
    else
    {
        cout << "the value of a/b is :-  " << a / b << endl;
    }

    return 0;
}