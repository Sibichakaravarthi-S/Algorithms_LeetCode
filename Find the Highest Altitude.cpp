class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0;
        int temp=0;
        for(int i=0;i<gain.size();i++){
            temp+=gain[i];
            altitude=max(altitude,temp);
        }
        return altitude;
    }
};