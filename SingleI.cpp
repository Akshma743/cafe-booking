#include<iostream>
using namespace std;
class A{
public:
void display()
{
    cout<<"Welcome \n ";
}
};
class B : public A{
public:
void display1(){
    cout<<" Programming in C++ \n";
}
};
class C: public A{
    public:
    void display2(){
        cout<<" Hierarchical inheritance \n";
    }

};
class D: public A{
public:
void display3(){
    cout<<"Class D\n";
}
};
int main(){
    B b;
    C c;
    D d;
    c.display2();
    d.display3();
    b.display();
    b.display1();
    
    return 0;
}