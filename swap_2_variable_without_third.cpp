//program to swap without third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter No. 1 :  ";
    cin>>a;
    cout<<"Enter No. 2 : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    return 0;
}
