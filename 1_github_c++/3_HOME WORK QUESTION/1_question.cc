#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int b=2;
    
    if((a--) >0 && (++b)>2)
    {
        cout<<"INSIDE STAGE 1"<<endl;
    }
    else
    {
        cout<<"STAGE 2 "<<endl;
    }
    cout<<a<<" "<<b;
    
}