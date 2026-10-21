class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg={};
        vector<int> pos={};
        int negPointer=0;
        int posPointer=0;
        for(int val:nums){
            if(val<0) neg.push_back(val);
            else pos.push_back(val);
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0) nums[i]=pos[posPointer++];
            else nums[i]=neg[negPointer++];
        }
        return nums;
    }
};