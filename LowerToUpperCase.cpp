#include<iostream>
#include<string>

using namespace std;

int main()
{
    // cout<<'a'-'A';
    string str;
    getline(cin,str);

    // convert into upper case

    for (int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    cout<<str;
    
}