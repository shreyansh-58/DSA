#include <iostream>
using namespace std;
int len(int n){
    int length=0;
    while(n!=0){
        length++;
        n/=10;
    }
    return length;
}
bool armNum(int n){
    int pow=len(n);
    int armstrong=0;
    int x=n;
    while(x!=0){
        int rem=x%10;
        int product=1;
        for(int i=0;i<pow;i++){
            product*=rem;
        }
        x/=10;
        armstrong+=product;
    }
    if(armstrong==n) return 1;
    else return 0;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    if(armNum(num)) cout<<"Armstrong Number";
    else cout<<"Not a Armstrong Number";
    return 0;
}