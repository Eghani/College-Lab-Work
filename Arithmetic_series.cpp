
#include <iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout << "Enter the first term a :- ";
    cin >> a;
    cout << "Enter the NUmber of term you want n :- ";
    cin >> n;
    cout << "ENetr the difference d :- ";
    cin >> d;

    for (int i = 0; i < n; i++)
    {
        int ap = a + i * d;
        cout << ap <<" ";
    }
    cout << endl;

    return 0;
}