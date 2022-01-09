#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    int reverse=0;
    while(n>0)
    {
        int lastd=n%10;
        reverse=reverse*10+lastd;
        n=n/10;
    }
    if(reverse==temp)
        cout<<"Palindrome";
    else
        cout<<"Not a palindrome";


}
