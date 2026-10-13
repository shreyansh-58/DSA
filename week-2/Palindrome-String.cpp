#include <iostream>
#include <string>
using namespace std;

bool palString(string x){
    int st=0;
    int end=x.length()-1;
    while(st<end){
        if(x[st]!=x[end]){
            return 0;
        }
    st++;
    end--;
    }
    return 1;
}

int main(){
    string s="abbba";
    if(palString(s)) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}