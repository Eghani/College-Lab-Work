#include<iostream>
#include<cmath>
using namespace std;

float semi_parameter(int a,int b,int c){
    float semi_para = (a + b + c) / 2.0;
    return semi_para;
}

float area_of_triangle(int a, int b , int c , float semi_para){
    float area = sqrt(semi_para* (semi_para - a) * (semi_para - b) * (semi_para - c));
    return area;
}

int main ()
{
    int a,b,c;
    cout<<"Enter the length of a :-  "<<endl;
    cin>>a;
    cout<<"Enter the length of b :-  "<<endl;
    cin>>b;
    cout<<"Enter the length of c :-  "<<endl;
    cin>>c;
    float semi_para = semi_parameter(a,b,c);
    float area_triangle = area_of_triangle(a,b,c,semi_para);
    // float  = area_of_triangle;

    cout<<"The area of triangle will be :- "<<area_triangle<<endl;


  return 0;
}