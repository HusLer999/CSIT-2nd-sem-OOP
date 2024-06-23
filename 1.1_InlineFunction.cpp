#include<iostream>
using namespace std;

inline int sum(int x,int y)
{
    return x+y;
}

int main()
{
    int a=5;
    int b=2;
    cout<<"The sum is: "<<sum(a,b)<<endl;
}