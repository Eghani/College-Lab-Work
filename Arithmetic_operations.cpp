#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter the number a :- "<<endl;
    cin>>a;
    cout<<"Enter the number b :- "<<endl;
    cin>>b;
//  there are 4 arthmetic opreation we can do in this we will do 4 without asking the user
    cout<<"The sum of "<<a<<" and "<<b<<" is :- "<<a + b<<endl;
    cout<<a<<" - "<<b<<" is :- "<<a - b<<endl;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is :- "<<a * b<<endl;
    if (b == 0)
    {
        cout<<"The divion is not possible with b = 0"<<endl;
    }
    else{
        cout<<"a/b is :- "<<a/b<<endl;
    }
    
  return 0;
}