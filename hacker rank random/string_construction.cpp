#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {
    long long len1 = s.length();
//    cout<<len1<<endl;

    int arr1[26]={0};

    for(int i = 0; i < len1; i++){
        arr1[int(s[i]) - 97]++;
    }
    int count = 0;
    for(int i=0;i <26; i++){
        if(arr1[i]>0){
            count++;
        }
    }

    return count;
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

        int result = stringConstruction(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}

