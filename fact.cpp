#include<iostream>
using namespace std;
class fac{
    public:
    int f=1;
     void fact(int n){
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        cout<<f;

     }
};
int main(){

    fac c;
    c.fact(5);
    return 0;
}
