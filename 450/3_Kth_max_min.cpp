#include<iostream>
using namespace std;

void Bubble_Sort(int a[],int n)
{

    int counter =1;
    while(counter<n)
    {

        for(int i=0;i<n-counter;i++)
        {

            if(a[i]>a[i+1])
            {

                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }
}


int main()
{
    int n;
    cin>>n;
    int k;cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }


    Bubble_Sort(a,n);
    cout<<"After Sorting"<<endl;
     for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<k<<"th smallest element "<<a[k-1]<<endl;
    cout<<k<<"th biggest elements "<<a[n-k]<<endl;

}
