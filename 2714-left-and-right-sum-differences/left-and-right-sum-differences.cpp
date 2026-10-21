class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int prefixSum=0;
        int sum=0;
        vector<int> ans={};
        for(int val:nums) sum+=val;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(prefixSum - abs(prefixSum-(sum-nums[i]))));
            prefixSum=prefixSum+nums[i];
        }
        return ans;
    }
};