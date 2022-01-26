#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Before transpose"<<endl;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            //swap
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }

    }
    
      cout<<"After transpose"<<endl;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;

}
