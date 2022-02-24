#include<bits/stdc++.h>
//#include<unordered_map>

using namespace std;

//int main()
/*{

    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    unordered_map<int,int> map;

    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        map[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        map[b[i]]++;
    }


        cout<<map.size()<<endl;
}*/

void printIntersec(int a[],int b[],int n,int m)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
}


void printUnion(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(b[j]<a[i])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
            i++;
        }
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }

}


int main()
{
    int n;cin>>n;
    int m;cin>>m;


    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"2nd array"<<endl;
    for(int i=0;i<m;i++)
    {

        cin>>b[i];
    }
    cout<<"Union -";
    printUnion(a,b,n,m);
    cout<<endl;
    cout<<"Intersection -";
    printIntersec(a,b,n,m);
    return 0;

}

