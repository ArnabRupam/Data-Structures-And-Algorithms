#include<iostream>
using namespace std;

void TOH(int n,char src,char dest,char help)
{

    if(n==0)
    {
        return;
    }

    TOH(n-1,src,help,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TOH(n-1,help,dest,src);
}
int main()
{
   TOH(4,'A','C','B');
}