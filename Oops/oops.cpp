#include <iostream>
using namespace std;

// By default all class are private such that you can not access the object outside the class
// To make class public we need to use public attribute

class student
{
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;   // default constructor because no parameter is passed
    }

    student(string s, int a, int g)  // parameterised constructor
    {
        cout<<"parameterised constructor"<<endl;
        name = s; 
        age = a;
        gender = g;
    }

    student(student &a)  // copy constructor
    {
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }

    void getName()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    void printInfo()
    {
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    bool operator == (student &a)   // here we have overloaded == operator
    {
        if(name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    // student a;
    // a.name = 'joyal'; // for many students we can make array
    // a.age = 19;
    // a.gender = 0;

    // student arr[3];
    // for(int i=0; i<3; i++)
    // {
    //     cout<<"Name = ";
    //     cin>>arr[i].name;
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0; i<3; i++)
    // {
    //     arr[i].printInfo();
    // }

    // we get the output from making constructor and calling function

    student a("joyal", 19, 0);
    // a.printInfo(); // or we can also use getName()
    
    student b;  // this call default constructor
    student c = a; // this call copy constructor

    if(c==a)   // we need to ovrload == operator
    {
        cout<<"same"<<endl;
    }

    else
    {
        cout<<"Not same"<<endl;
    }

    return 0;
}
