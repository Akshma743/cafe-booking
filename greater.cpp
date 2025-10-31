#include<iostream>
using namespace std;
class Gn{
    public:
    Gn(int a,int b){
        if(a>b)
        cout<<"a is greater";
    
        else
        cout<<"b is greater";
    }

};
int main(){

Gn g(50,7);
return 0;
}
