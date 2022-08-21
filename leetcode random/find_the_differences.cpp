class Solution {
public:
    char findTheDifference(string s, string t) {
        string arr = "abcdefghijklmnopqrstuvwxyz";
        long int sLen = s.length();
        long int tLen = t.length();

        long int sArr[26]={0};
        long int tArr[26]={0};

        for(int i = 0; i < sLen; i++){
            int idx = s[i] - 'a';
            ++sArr[idx];
        }
        for(int i = 0; i < tLen; i++){
            int idx = t[i] - 'a';
            ++tArr[idx];
        }

        for(int i =0; i < 26; i++){
            // cout<<sArr[i]<<"=="<<tArr[i]<<endl;
            if(sArr[i] < tArr[i]){
                return arr[i];
            }
        }
        return ' ';
    }
};
