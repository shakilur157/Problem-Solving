#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {


    long long len1 = s1.length();
    long long len2 = s2.length();


    int arr1[26]={0};
    int arr2[26]={0};

    for(int i = 0; i < len1; i++){
        arr1[int(s1[i]) - 97]++;
    }
    for(int i = 0; i < len2; i++){
        arr2[int(s2[i]) - 97]++;
    }
    for(int i = 0; i < 26; i++){
        if(arr1[i]>0 && arr2[i]>0){
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
