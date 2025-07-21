class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

        long long mass1=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
            if(mass1<asteroids[i])   return false;
            mass1+=asteroids[i];
        }
        return true;
    }
};