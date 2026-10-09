#include <iostream>
using namespace std;
void allDiv(int n){
    for(int i=1;i<=n/2;i++){
        if(n%i==0) cout<<i<<endl;
    }
    cout<<n<<endl;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    allDiv(num);
    return 0;
}