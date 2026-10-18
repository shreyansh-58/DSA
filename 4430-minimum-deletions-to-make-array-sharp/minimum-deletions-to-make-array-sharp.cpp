class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count=0;
        int p1=1;
        while(p1<nums.size()){
            if(nums[p1]==nums[p1-1]) count++;
            p1+=1;
        }
        return count;
    }
};