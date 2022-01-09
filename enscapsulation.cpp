#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void funcA()
    {
        cout<<"Func A-"<<a<<endl;
    }
    private:
    int b;
    void funcB()
    {
        cout<<"FuncB\n";
    }
    protected:
    int c;
    void funcC()
    {
        cout<<"Func C"<<endl;
    }
};
int main()
{
    A obj;
    obj.funcA();
    obj.a=20;
    
