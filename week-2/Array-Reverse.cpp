#include <iostream>
#include <vector>
using namespace std;

int arrRev(vector<int> &arr){
    static int st=-1, end=arr.size();
    if(st==end) return 1;
    swap(arr[st],arr[end]);
    st++;
    end--;
    arrRev(arr);
}

int main(){
    vector<int> num={-3,-2,-1,0,1,2,3};
    arrRev(num);
    for(int val:num) cout<<val<<endl;
    return 0;
}