#include<iostream>
using namespace std;
class fib{
    public:
    void series(int n){
        int f=0;
        int s=1;
        int t;
        cout<<f<<"\n"<<s<<"\n";
        for(int i=1;i<n;i++){
            
            t=f+s;
            cout<<t<<"\n";
            
            f=s;
            s=t;
        }
    }
};
int main(){
    fib b;
    b.series(7);
    return 0;
}