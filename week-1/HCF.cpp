#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a;
    cin>>b;
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    cout<<"HCF:"<<a;
    return 0;
}