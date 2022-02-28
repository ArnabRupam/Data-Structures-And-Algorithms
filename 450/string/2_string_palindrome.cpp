#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp=s;
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        swap(s[i],s[n-i-1]);
    }
    if(temp==s)
    {
        cout<<"palindrome"<<endl;

    }
    else
    {
        cout<<"Not a palindrome"<<endl;
    }

}
