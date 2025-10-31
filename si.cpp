#include<iostream>
using namespace std;
class SI{
    public:
      SI(){
        int p,r,t,s;
        p=100;
        r=4;
        t=2;
        int result=((p*r*t)/100);
        cout<<result;

      }
};
int main(){
    SI obj;
    
    return 0;
}