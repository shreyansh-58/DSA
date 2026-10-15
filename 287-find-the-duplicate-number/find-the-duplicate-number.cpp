class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int pos=nums[i]-1;
            if(nums[i]!=nums[pos]){
                swap(nums[i],nums[pos]);
                i--;
            }
        }
        return nums[n-1];
    }
};