// array of integers contains -ve and +ve integer
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout<<"i'm in the base class!!";
        cout<<endl;
    }
};

class derivedClass: public Base{
    public:
    void print(){
        cout<<"i'm now in derived class";
        cout<<endl;
    }
};

int main(){
   derivedClass obj2;
   Base *obj1 = &obj2;

   obj1->print();
   obj2.print();
}