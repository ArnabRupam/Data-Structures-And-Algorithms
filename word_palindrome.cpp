#include<iostream>
using namespace std;

int main()
{
    // char arr[100]="apple";
    // int i=0;
    // while(arr[i]!='\0')
    // {
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

    // check palindrome

   

    int n;
    cin>>n;
    char arr[n+1];

    cin>> arr;

    bool check=true;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=false;
            break;
        }
    }

    if(check == true)
        cout<<"Word is the palindrome"<<endl;
    else
        cout<<"Word is not the palindrome"<<endl;
     return 0;

}