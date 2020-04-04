#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {

    long long len = s.length();

    if(len&1){
        return -1;
    }
    int s1[26]={0};
    int s2[26]={0};
    for(int i = 0; i < len; i++){
        if(i<len/2){
            s1[int(s[i]) - 97]++;
        }else{
            s2[int(s[i]) - 97]++;
        }

    }
    long long count1 = 0, count2 = 0;
    for(int i =0; i<26; i++){
        count1 += abs(s1[i] - s2[i]);
    }
    return count1/2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
