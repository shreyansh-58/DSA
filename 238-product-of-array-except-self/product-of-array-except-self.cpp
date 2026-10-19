class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int product=1;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            if(nums[i]!=0){
                product*=nums[i];
            }
        }
        if(zero>=2) return ans;
        if(zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0) ans[i]=product;
            }
            return ans;
        }
        else{
            for(int i=0;i<nums.size();i++){
                ans[i]=product/nums[i];
            }
        }
    return ans;
    }
};