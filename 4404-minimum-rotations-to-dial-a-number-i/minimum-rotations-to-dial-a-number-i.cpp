class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int pt=0;
        for(int i=0;i<10;i++){
            int abl=abs((s[i]-'0')-pt);
            int rot=min(abl,10-abl);
            ans=ans+rot;
            pt=s[i]-'0';
        }
        return ans;

        
    }
};