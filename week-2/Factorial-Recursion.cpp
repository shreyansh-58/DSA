#include <iostream>
using namespace std;

int facRec(int n){
    static int pro=1;
    if(n==0) return pro;
    pro*=n;
    facRec(--n);
}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<facRec(num);
    return 0;
}