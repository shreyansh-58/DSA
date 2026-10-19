class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long int ans=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=nums[i]*(-1);
            }
        }
        sort(nums.begin(),nums.end());
        int st=0;
        int end=nums.size()-1;
        while(st<end){
            ans=ans+(nums[end]*nums[end])-(nums[st]*nums[st]);
            st++;
            end--;
        }
        if(nums.size()%2==0) return ans;
        else{
            return ans+(nums[n/2]*nums[n/2]);
        }
    }
};