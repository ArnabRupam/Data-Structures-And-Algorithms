//this can be done using the merge sort concept with more
//efficient time complexity......incmplt!



#include<iostream>
using namespace std;

int merge(int a[],int l,int r,int mid,int n)
{
    int i,j,k,inv=0;
    i=l;
    j=mid+1;
    k=l;
    int temp[n];

    while((i<=mid)&&(j<=r))
          {
              if(a[i]<a[j])
                {
                    temp[k]=a[i];
                    k++;
                    i++;
                }
                else
                {
                    temp[k]=a[j];
                    k++;
                    j++;
                    inv+=(mid-i);
                }
          }
          while(i<=mid)
          {
              temp[k]=a[i];
              k++;
              i++;
          }
          while(j<=r)
          {
              temp[k]=a[j];
              k++;
              j++;
          }
          for(int p=l;p<=r;p++)
          {
              a[p]=temp[p];
          }
          return inv;
}




int mergeSort(int a[],int l,int r,int n)
{
    int inv=0;
    if(l<r)
    {
        int mid=(l+r)/2;
        inv+=mergeSort(a,l,mid,n);
        inv+=mergeSort(a,mid+1,r,n);
        inv+=merge(a,l,mid,r,n);
    }
    return inv;

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

    cout<<mergeSort(a,0,n-1,n);

 //   int inv=0;
  //  for(int i=0;i<n;i++)
 //   {
 //       for(int j=i+1;i<n;i++)
  //      {
 //           if(a[i]>a[j])
  //          {
 //               inv++;
 //           }
 //       }
//    }
 //   cout<<inv;
}
