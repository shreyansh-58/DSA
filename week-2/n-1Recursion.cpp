#include <iostream>
using namespace std;

int oneRec(int n){
    if(n==0) return 1;
    cout<<n--<<endl;
    oneRec(n);
}

int main(){
    int num;
    cout<<"Enetr the Number: ";
    cin>>num;
    oneRec(num);
    return 0;
}