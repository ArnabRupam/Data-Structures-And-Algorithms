 #include<bits/stdc++.h>
 #include<algorithm>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int curr=INT_MAX;
     int p=0;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         if(a[i]<curr)
         {
             curr=a[i];
         }
         else if(a[i]-curr>p){
            p=a[i]-curr;
         }
     }
     cout<<p<<endl;
 }
