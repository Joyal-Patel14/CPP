#include <iostream>
using namespace std;

class A
{
    private:

    int a;
    void funca()     // this is priavate function
    {
        cout<<"funcA"<<endl;
    }

    public:

    int b;
    void funcb()    // this is public function
    {
        cout<<"fincB"<<endl;
    }


    protected:

    int c;
    void funcc()    // this is protected function
    {
        cout<<"funcC"<<endl;
    }


};

int main(){

    A obj;
    // obj.funca(); // we can't call funca beacause it is private
    obj.funcb(); // and funcb is public function
    
    return 0;
}
