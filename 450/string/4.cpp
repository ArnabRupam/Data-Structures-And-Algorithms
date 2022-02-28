#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int s1l=s1.length();
    int s2l=s2.length();


    if(s2l!=s1l)
    {
        cout<<"No"<<endl;
    }
    else
    {
        string temp=s1+s1;
        if(temp.find(s2))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
