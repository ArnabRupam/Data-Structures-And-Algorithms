#include<iostream>
#include<string>
using namespace std;

void Reverse(string &s)
{
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        swap(s[i],s[n-i-1]);
    }
}


int main()
{
    string s;
    cin>>s;

    Reverse(s);
    cout<<s<<endl;
}
