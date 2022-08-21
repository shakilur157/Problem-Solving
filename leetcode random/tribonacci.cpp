class Solution {
public:
    int tribonacci(int n) {
        vector<int> vect;

        vect.push_back(0);
        vect.push_back(1);
        vect.push_back(1);

        for(int i = 3; i <= n; i++){
            int ans = vect[i-1] + vect[i-2] + vect[i-3];
            vect.push_back(ans);
        }
        return vect[n];
    }
};
