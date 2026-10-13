class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        if(n<2) return nums[0]*nums[0];
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                sum+=nums[i-1]*nums[i-1];
            }
        }
        sum+=nums[n-1]*nums[n-1];
        return sum;


    }
};