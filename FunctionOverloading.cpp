#include<iostream>
using namespace std;

/* Function Overloading..... 
   When a funtion is overloaded with different tasks, it is called funtion overloading.
   It is a feature that allows us to have more than one function having the same name but
   with different properties.*/
   
void sum(int x)
{
    int y=0;
    int sum=x+y;
    cout<<endl<<"Sum: "<<sum<<endl;
}

void sum(int x,int y)
{
    int sum=x+y;
    cout<<"Sum: "<<sum<<endl;
}

void sum(int x,float y)
{
    float sum=x+y;
    cout<<"Sum: "<<sum<<endl<<endl;
}

int main()
{
    sum(5);
    sum(5,2);
    sum(5,3.2f);
}