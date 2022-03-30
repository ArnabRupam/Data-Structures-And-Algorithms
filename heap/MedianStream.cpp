#include<vector>
#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>>minpq;
priority_queue<int,vector<int>>maxpq;

void insert(int x)
{
    if(minpq.size()==maxpq.size())
    {
        if(maxpq.size()==0)
        {
            maxpq.push(x);
            return;
        }
        else if(x<maxpq.top())
        {
            maxpq.push(x);
        }
        else
        {
            minpq.push(x);
        }
    }
    else
    {
      if(maxpq.size()>minpq.size())
      {


        if(x>=maxpq.top())
        {
            minpq.push(x);
        }
        else
        {
            int temp=maxpq.top();
            maxpq.pop();
            minpq.push(temp);
            maxpq.push(x);
        }
      }
        else{

            if(x<=minpq.top())
            {
                maxpq.push(x);
            }
            else
            {
                int temp=minpq.top();
                minpq.pop();
                maxpq.push(temp);
                minpq.push(x);
            }
        }

    }
}

double findMedian()
{
    if(minpq.size()==maxpq.size())
    {
        return((maxpq.top()+minpq.top())/2);
    }
    else if(maxpq.size()>minpq.size())
    {
        return maxpq.top();
    }
    else
    {
        return minpq.top();
    }
}


int main()
{

    insert(10);
    cout<<findMedian()<<endl;

    insert(15);
    cout<<findMedian()<<endl;

    insert(21);
    cout<<findMedian()<<endl;

    insert(30);
    cout<<findMedian()<<endl;

    return 0;
}
