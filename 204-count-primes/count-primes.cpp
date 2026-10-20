class Solution {
public:
    int countPrimes(int n) {
        vector<int> ans(n,1);
        int count=0;
        for(int i=2;i*i<=n;i++){
            for(int j=i*i;j<n;j+=i){
                ans[j]=0;
            }
        }
        for(int i=2;i<n;i++){
            if(ans[i]==1) count++;
        }
    return count;
    }
};