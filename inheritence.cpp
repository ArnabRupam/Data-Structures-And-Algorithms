#include<iostream>
using namespace std;
single inheritence
class A{
    public:
    void func()
    {
        cout<<"Inher"<<endl;
    }
};
class B : public A{

};

int main ()
{
    B b;
    b.func();
}

Multiple Inheritence
class A{
public:
    void func()
    {
        cout<<"Func A"<<endl;
    }
};
class B{
    public:
    void funcB()
    {
        cout<<"Func b"<<endl;
    }
};
class C : public A,public B{

};
int main()
{
    C c;
    c.func();
    c.funcB();
}
