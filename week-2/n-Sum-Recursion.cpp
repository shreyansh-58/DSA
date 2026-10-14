#include <iostream>
using namespace std;

int nSum(int n){
    static int sum=0;
    if(n==0) return sum;
    sum+=n;
    nSum(--n);
}

int main(){
    int num;
    cout<<"Enetr the Number: ";
    cin>>num;
    cout<<nSum(num);
    return 0;
}