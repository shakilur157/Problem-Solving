#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int makingAnagrams(string s1, string s2) {

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
    long long count1 = 0;

    cout<<len1+len2<<endl;
    for(int i =0; i<26; i++){
        cout<<arr1[i]<<"==="<<arr2[i]<<endl;
        if(arr1[i]>0 && arr2[i]>0){
            count1 += min(arr1[i], arr2[i]);
        }
//        count1 += min(arr1[i], arr2[i]) + abs(arr1[i] + arr2[i]);
    }
    return (len1 + len2)- count1*2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    long long result = makingAnagrams(s1, s2);

    cout << result << "\n";

    fout.close();

    return 0;
}


