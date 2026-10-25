class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int st=0;
        while(st+1<nums.size()){
            if(nums[st]%2!=0 && nums[st+1]%2!=0 || nums[st]%2==0 && nums[st+1]%2==0) return 0;
            st++;
        }
        return 1;
    }
};