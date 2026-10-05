#include <iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter the Integer";
    cin>>n;
    while(n!=0){
        count++;
        n/=10;
    }
    cout<<count;
}
