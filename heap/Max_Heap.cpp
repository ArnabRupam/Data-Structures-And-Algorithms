#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y)
{

    int temp=x;
    x=y;
    y=temp;
}



class MaxHeap{
    public:
    int *harr;
    int capacity;
    int heap_size;
    MaxHeap(int cap)
    {
        capacity=cap;
        harr=new int[cap];
        heap_size=0;
    }

    void LinearSearch(int x)
    {
        for(int i=0;i<heap_size;i++)
        {
            if(harr[i]==x)
            {
                cout<<"Value found at-"<<i;
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
    int getMax()
    {
        return harr[0];
    }
     void insertNode(int val)
     {
         if(capacity==heap_size)
         {
             cout<<"Max Heap is full"<<endl;
             return;
         }
         heap_size++;
         int i=heap_size-1;
         harr[i]=val;
         while(i!=0 && harr[parent(i)]<harr[i])
         {
             swap(harr[parent(i)],harr[i]);
             i=parent(i);
         }

     }


     void maxheapify(int i)
     {
         int l=left(i);
         int r=right(i);
         int largest=i;
         if(l<heap_size && harr[l]>harr[i])
         {
             largest=l;
         }
         if(r<heap_size && harr[r]>harr[i])
         {
             largest=r;
         }
         if(largest!=i)
         {
             swap(harr[i],harr[largest]);
             maxheapify(largest);
         }

     }


     int extractMax()
     {
         if(heap_size<=0)
         {
             return INT_MIN;
         }
         if(heap_size==1)
         {
             heap_size--;
             return harr[0];
         }
         int root=harr[0];
         harr[0]=harr[heap_size-1];
         heap_size--;
         maxheapify(0);
         return root;
     }
      void increaseKey(int i,int new_val)
    {
        harr[i]=new_val;
        while(i!=0 && harr[parent(i)]<harr[i])
        {
            swap(harr[i],harr[parent(i)]);
            i=parent(i);
        }
    }


    void deleteKey(int i)
    {
        increaseKey(i,INT_MAX);
         extractMax();
    }



};
int main()
{
    int option,value,n;
    cout<<"Enter the heap Size"<<endl;
    cin>>n;
    MaxHeap obj(n);
    cout<<"Max Heap is created"<<endl;

    do{
        cout<<"what operation do you want to perform"<<endl;
        cout<<"1.Insert Node"<<endl;
        cout<<"2.search node"<<endl;
        cout<<"3.delete node"<<endl;
        cout<<"4.height of the heap"<<endl;
        cout<<"5.get Max"<<endl;
        cout<<"6.extract max"<<endl;
        cout<<"7.print max"<<endl;
        cout<<"8.clear screen"<<endl;
        cout<<"0.exit"<<endl;

        cin>>option;
        switch(option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter the value you want to enter in the heap"<<endl;
            cin>>value;
            obj.insertNode(value);
            cout<<endl;

            break;
        case 2:
            cout<<"Enter the data you want to search"<<endl;
            cin>>value;
            obj.LinearSearch(value);
            cout<<endl;

                break;


        case 3:
                cout<<"Enter the node you want to delete-"<<endl;
                cin>>value;
                obj.deleteKey(value);
                cout<<endl;
                break;

        case 4:
            cout<<"height of the maxHeap-"<<obj.height()<<endl;

                break;

        case 5:
                cout<<"root node="<<obj.getMax();
                cout<<endl;
                break;

        case 6:
                cout<<"extractMax option called-"<<endl;
                obj.extractMax();
                cout<<endl;
                break;

        case 7:
            cout<<"values in the MaxHeap"<<endl;
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
