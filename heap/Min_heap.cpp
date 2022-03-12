#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

class MinHeap{
    public:
    int *harr;
    int capacity;
    int heap_size;

    MinHeap(int cap)
    {
        heap_size=0;
        capacity=cap;
        harr=new int[cap];

    }
    void linearSearch(int val)
    {
        for(int i=0;i<heap_size;i++)
        {
            if(harr[i]==val)
            {
                cout<<"Value found"<<endl;
                return;
            }

        }
        cout<<"Value not found"<<endl;
    }
    void printArray()
    {
        for(int i=0;i<heap_size;i++)
        {
            cout<<harr[i]<<" ";
        }
        cout<<endl;
    }
    int height()
    {
        return ceil(log2(heap_size+1))-1;
    }

    int parent(int i)
    {
        return (i-1)/2;
    }
    int left(int i)
    {
        return (2*i)+1;
    }
    int right(int i)
    {
        return (2*i)+2;
    }
    int getMin()
    {
        return harr[0];
    }

    void insertkey(int k)
    {
        if(heap_size==capacity)
        {
            cout<<"Heap Overflown"<<endl;
            return;
        }
        heap_size++;
        int i=heap_size-1;
        harr[i]=k;

        while(i!=0 && harr[parent(i)]>harr[i])
        {
            swap(harr[i],harr[parent(i)]);
            i=parent(i);
        }
    }

    void MinHeapify(int i)
    {
        int l=left(i);
        int r=right(i);
        int smallest=i;
        if(l<heap_size && harr[l]<harr[i])
        {
            smallest=l;
        }
        if(r<heap_size && harr[r]<harr[i])
        {
            smallest=r;
        }
        if(smallest!=i)
        {
            swap(harr[i],harr[smallest]);
            MinHeapify(smallest);
        }

    }

    int extractMin()
    {
        if(heap_size<=0)
        {
            return INT_MAX;
        }
        if(heap_size==1)
        {
            heap_size--;
            return harr[0];
        }
        int root=harr[0];
        harr[0]=harr[heap_size-1];
        heap_size--;
        MinHeapify(0);
        return root;
    }

    void decreaseKey(int i,int new_val)
    {
        harr[i]=new_val;
        while(i!=0 && harr[parent(i)]>harr[i])
        {
            swap(harr[i],harr[parent(i)]);
            i=parent(i);
        }
    }


    void deleteKey(int i)
    {
        decreaseKey(i,INT_MIN);
         extractMin();
    }


};



int main()
{
    int s;
    cout<<"Enter the size"<<endl;
    cin>>s;
    MinHeap obj(s);
    cout<<"Min heap Created"<<endl;

    int option,val;
    do
    {
       cout<<"What operation you want to perform"<<endl;
       cout<<"1.Insert key"<<endl;
       cout<<"2. Search key"<<endl;
       cout<<"3.Delete Node"<<endl;
       cout<<"4.Get Min"<<endl;
       cout<<"5.Extract Min"<<endl;
       cout<<"6.Height of the heap"<<endl;
       cout<<"7.Print"<<endl;
       cout<<"8.cls"<<endl;
       cout<<"0.Exit"<<endl;

       cin>>option;

       switch(option)
       {
       case 0:
        break;
       case 1:
           cout<<"Enter value in heap"<<endl;
           cin>>val;
           obj.insertkey(val);
           cout<<endl;
           break;
       case 2:
           cout<<"Enter the element to search"<<endl;
           cin>>val;
           obj.linearSearch(val);
           cout<<endl;
            break;
       case 3:
           cout<<"Enter the key to delete"<<endl;
           cin>>val;
           obj.deleteKey(val);
           cout<<endl;
           cout<<val<<" Key is deleted"<<endl;
            break;
       case 4:
           cout<<obj.getMin()<<endl;
            break;
       case 5:
           cout<<obj.extractMin()<<endl;
           cout<<endl;
            break;
       case 6:
            cout<<"height-"<<obj.height()<<endl;
            break;
       case 7:
           cout<<"array contains-"<<endl;
           obj.printArray();
            break;
       case 8:
            system("cls");
            break;
       default:
            cout<<"Enter the proper option number"<<endl;

       }
    }while(option!=0);

}
