class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int j = size - 1;
        for(int i = 0; i < size / 2; i++){
            int temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            j--;
        }
        for(int i = 0; i < size; i++){
            cout<<""<<s[i]<<" ";
        }
    }
};