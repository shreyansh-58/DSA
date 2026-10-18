class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count=0;
        int p1=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) count++;
            p1++;
        }
        return count;
    }
};