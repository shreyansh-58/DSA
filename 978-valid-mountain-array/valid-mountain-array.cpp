class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return 0;
        int peakidx=0;
        int pt=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=arr[peakidx]) peakidx=i;
        }
        if(peakidx==0 || peakidx==arr.size()-1) return 0;
        while(pt<arr.size()){
            if(pt<=peakidx){
                if(arr[pt]>arr[pt-1]) pt++;
                else return 0;
            }
            else{
                if(arr[pt]<arr[pt-1]) pt++;
                else return 0;
            }
        }
        return 1;
    }
};