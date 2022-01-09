#include<iostream>
using namespace std;

void Selection(int a[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
      for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Selection(a,n);

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j])
    //         {
    //            int temp=a[j];
    //             a[j]=a[i];
    //             a[i]=temp;
    //         }
    //     }
    // 
    //  for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
  
}
