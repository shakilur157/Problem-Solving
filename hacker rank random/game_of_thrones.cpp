#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

    long long len1 = s.length();
//    cout<<len1<<endl;

    int arr1[26]={0};
    int arr2[26]={0};

    for(int i = 0; i < len1; i++){
        arr1[int(s[i]) - 97]++;
    }
    int count = 0;
    bool flag = false;

    if(len1%2==0){
        for(int i = 0; i < 26; i++){
            if(arr1[i]%2==0){
                continue;
            }else{
                return "NO";
            }
        }
    }else{
        for(int i = 0; i < 26; i++){
            if(arr1[i]%2==0){
                continue;
            }else{
                if(arr1[i]>0){
                    count++;
                }
//                cout<<count<<endl;
            }
        }
        return count == 1? "YES" : "NO";

    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    cout << result << "\n";

    fout.close();

    return 0;
}

