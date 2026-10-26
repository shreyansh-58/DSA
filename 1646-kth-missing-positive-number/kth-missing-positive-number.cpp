class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans;
        int point=1;
        int i=0;
        while( point!=arr[arr.size()-1] && k!=0){
            if(point!=arr[i]){
                k--;
                ans=point;
            }else{
                i++;
            }
            point++;
        }
        if(point==arr[arr.size()-1] && k!=0){
            while(k!=0){
                k--;
                point++;
            }
            ans=point;
        }
        return ans;
    }
};