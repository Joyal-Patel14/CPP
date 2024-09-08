#include <iostream>
using namespace std;

// Single inheritance

class A
{
    public:
    void func()
    {
        cout << "Inherited" << endl;
    }
};

class B : public A
{
};

// Multiple inheritance

class A
{
    public:
    void funcA()
    {
        cout << "func of A" << endl;
    }
};

class B
{
    public:
    void funcB()
    {
        cout << "func of B" << endl;
    }
};

class C : public A, public B    // class c has inherited values of class A and B
{ 
};

// Multi level inheritance

class A
{
    public:
    void funcA()
    {
        cout << "func of A" << endl;
    }
};

class B : public A
{
    public:
    void funcB()
    {
        cout << "func of B" << endl;
    }
};

class C : public B  // class C inherit values from class B and class B inherit values from class A
{ 
};

// Hybrid inheritance

class A
{
    public:
    void funcA()
    {
        cout << "func of A" << endl;
    }
};

class B : public A
{
    public:
    void funcB()
    {
        cout << "func of B" << endl;
    }
};

class c
{
    public:
    void funcC()
    {
        cout << "func of C" << endl;
    }
};

class D : public B, public C  // class D inherited both the class B and C
{ 
};

int main()
{

    B obj;
    // obj.func();
    return 0;
}
