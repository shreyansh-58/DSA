#include <iostream>
using namespace std;

int nameRec(int n){
    if(n==0) return 1;
    cout<<"Shreyansh"<<endl;
    nameRec(n-1);
}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    nameRec(num);
    return 0;
}