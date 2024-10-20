#include <iostream>
using namespace std;
int main()
{
    // Assuming 1 is not a prime number 
    // set the number as prime 
    for (int num = 2; num <= 100; num++)
    {
        bool isPrime = true;
        // check for divisor 
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {

                isPrime = false;
                break;
            }
        }
        // if the no is prime then we will print it 
        if (isPrime)
        {
            cout << num << " ";
        }
    }

    return 0;
}