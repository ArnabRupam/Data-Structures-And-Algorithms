#include<iostream>
#include<vector>
using namespace std;

vector<int> commonElements(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;
    vector<int> v;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a[i]==b[j] and b[j]==c[k])
        {
            v.push_back(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<c[k])
        {
            j++;
        }
        else
            k++;
        int xx=a[i-1];
        while(a[i]==xx)
            i++;
        int yy=b[j-1];
        while(b[j]==yy)
            j++;
        int kk=c[k-1];
        while(c[k]==kk)
            k++;
    }
    if(v.size()==0)
        return {-1};
    return v;
}





int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];

    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n3;i++)
    {
        cin>>c[i];
    }
    vector <int> res=commonElements(a,b,c,n1,n2,n3)<<endl;
    if(res.size()==0)
        cout<<-1;
    for(int i=0;i<res.size();i++)
        cout<< res[i]<<" ";
    cout<<endl;

}
