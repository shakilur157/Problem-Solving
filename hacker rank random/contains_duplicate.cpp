class Solution {
    public:
    bool containsDuplicate(vector<int>& v){
        sort(v.begin(),v.end());
        int size = v.size();
        for(int i = 0; i < size - 1; i++) {
            if(v[i] == v[i+1]){
                return true;
            }
        }
        return false;
    }
};
