#include<iostream>
using namespace std;


void merge(int a[],int l,int m,int r,int n)
{
    int i=l;
    int j=m+1;
    int k=l;

    int temp[n];

    while(i<=m && j<=r)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=m)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    for (int p=l;p<=r;p++)
    {
        a[p]=temp[p];
    }

}




void mergeSort(int a[],int l,int r,int n)
{
    if(l<r)
    {
        int mid=(l+r)/2;

        mergeSort(a,l,mid,n);
        mergeSort(a,mid+1,r,n);

        merge(a,l,mid,r,n);
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

    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    mergeSort(a,0,n-1,n);
    cout<<"\n";
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
