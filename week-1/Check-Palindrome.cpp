#include <iostream>
using namespace std;
int main(){
    int rev=0;
    int n;
    cout<<"Enter the number";
    cin>>n;
    int x=n;
    while(x!=0){
        rev=rev*10 + (x%10);
        x/=10;
    }
    if(rev==n) cout<<"Palindrome";
    else cout<<"Not Palidrome";
    return 0;
}