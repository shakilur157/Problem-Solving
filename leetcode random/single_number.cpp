class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0, count = 0, len = nums.size();
        set<int> myset;
        for(int i=0; i < len; i++){
            count += nums[i];
            myset.insert(nums[i]);
        }
        set<int>::iterator itr;
        for (itr = myset.begin(); itr != myset.end(); itr++)
        {
            a += *itr;
        }
        return 2*a - count;
    }
};
