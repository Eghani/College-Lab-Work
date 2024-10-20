#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[10];
    int sum = 0;
    int index;
    int largest = INT_MIN;
    int count = 1;
    // input from the user 
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the Elements of array :- " << count << endl;
        cin >> arr[i];
        count++;
    }

    // to find the sum of the element in the array

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout << "\nThe sum of all the element is :- " << sum << endl;

    // to find the largest number in the array

    for (int i = 0; i < 10; i++)
    {
        largest = max(arr[i], largest);
    }

    // to find the largest no Index/Position

    for (int i = 0; i < 10; i++)
    {
        if (largest == arr[i])
        {
            index = i;
        }
    }
    cout << "\nThe largest no is :- " << largest << "\n\nthe Position of largest no is :- " << index << endl;
    cout<<endl;
    return 0;
}