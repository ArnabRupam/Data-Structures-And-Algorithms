#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int sum =0;
    int temp=n;
    while(n>0)
    {
        int lastd=n%10;
        sum=sum+pow(lastd,3);
        n=n/10;

    }
    if(temp==sum)
    {
        cout<<"Armstrong";
    }
    else    
        cout<<"Not a Armstrong no.";
}
