#include <iostream>
using namespace std;

bool isPrime(int n){
    int count=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            count=0;
        }
    }
    return count;
}

int main(){
    int x;
    cout<<"Enter the Number: ";
    cin>>x;
    if(isPrime(x)) cout<<"Prime Number";
    else cout<<"Not a Prime Number";
    return 0;
}