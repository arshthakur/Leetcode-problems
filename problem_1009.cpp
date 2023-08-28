#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value:";
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0)
    return 1;
    while(m!=0)
    {
        mask=(mask<<1)|1;
        mask>>1;
    }
    int ans=(~n)&mask;
    cout<<"answer: "<<ans;
    return 0;
}