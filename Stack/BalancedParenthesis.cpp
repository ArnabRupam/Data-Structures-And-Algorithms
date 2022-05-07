#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int n=s.length();
    bool ans= true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
        else if(!st.empty()&&s[i]==')')
        {
            if(st.top()=='(')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty()&&st.top()=='{')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty()&&st.top()=='[')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }

    }
    if(!st.empty())
    {
        return false;
    }
    else
    {
        return ans;
    }
}
int main()
{

    string s;
    getline(cin,s);
    if(isValid(s))
    {
        cout<<" true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
