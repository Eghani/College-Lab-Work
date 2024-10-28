#include<iostream>
#include <limits.h>
using namespace std;

void minimum(int arr[] , int size){
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(arr[i] , mini);
    }
    cout<<"The minimum element in the array is :- "<<mini<<endl;
    
}
int main ()
{
    int size;
    cout<<"Enter the size of the array : - " <<endl;
    cin>>size;
    int arr[size];
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<count<<" Element of the array :- "<<endl;
        cin>>arr[i];
        count++;
    }
    minimum(arr , size);
    
  return 0;
}