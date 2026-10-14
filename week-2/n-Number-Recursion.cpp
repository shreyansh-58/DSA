#include <iostream>
using namespace std;

int nRec(int x,int n){
    if(x==n+1) return 1;
    cout<<x++<<endl;
    nRec(x,n);
}

int main(){
    int num;
    int a=1;
    cout<<"Enter the Number: ";
    cin>>num;
    nRec(a,num);
    return 0;
}