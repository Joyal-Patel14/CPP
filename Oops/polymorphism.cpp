#include <iostream>
using namespace std;

// function overloading

class apnacollege{
    public:

    void func()
    {
        cout<<"I am function with no arguments"<<endl;
    }

    void func(int i)
    {
        cout<<"I am function with int argument"<<endl;
    }

    void func(double i)
    {
        cout<<"I am function with double argument"<<endl;
    }
};

// Operator overloading

// Here is the code of addition of complex numbers

class complex{
    private:
        int real, img;

    public:
        complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }
    complex operator + (complex const &obj)
        {
            complex res;
            res.img = img + obj.img;
            res.real = real + obj.real;
            return res;

        }

    void display()
        {
            cout<<real<<" + i"<<img<<endl;
        }       

};

// function overriding 
// Run time polymorphism

class base{
    public:

    virtual void print()
    {
        cout<<"This is base class's print function"<<endl;
    }

    void display()
    {
        cout<<"This is base class's display function"<<endl;
    }
};

class derived : public base{
    public:

    void print()
    {
        cout<<"This is derived class's print function"<<endl;
    }

    void display()
    {
        cout<<"This is derived class's display function"<<endl;
    }
};

int main(){

    apnacollege obj;
    obj.func();
    obj.func(4);
    obj.func(6.2);

    complex c1(12,7), c2(6,7);
    complex c3 = c1 + c2;
    c3.display();

    base *baseptr;
    derived d;
    baseptr = &d;
    
    baseptr -> print();
    baseptr -> display();

    return 0;
}
