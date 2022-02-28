#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string sr;cin>>sr;
    int l1=s1.length();
    int l2=s2.length();
    int lr=sr.length();
    if((l1+l2)!= lr)
        cout<<"No"<<endl;
    else
    {
        int f=0;
        int i=0;
        int j=0;
        int k=0;
        while(k<lr)
        {
            if(i<l1 && s1[i]==sr[k])
            {
                i++;
            }
            else if(j<l2 && s2[j]==sr[k])
            {
                j++;
            }
            else
            {
                f=1;
                break;
            }
            k++;
        }
        if(i<l1||j<l2)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
}
