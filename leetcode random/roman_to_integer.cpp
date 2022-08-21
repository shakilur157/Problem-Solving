#include<bits/stdc++.h>
using namespace std;

int main(){
    string roman = "XXIV";
    map<char, int> myMap;
    myMap.insert(pair<char, int>('I',1));
    myMap.insert(pair<char, int>('V',5));
    myMap.insert(pair<char, int>('X',10));
    myMap.insert(pair<char, int>('L',50));
    myMap.insert(pair<char, int>('C',100));
    myMap.insert(pair<char, int>('D',500));
    myMap.insert(pair<char, int>('M',1000));

    int len = roman.size();
    char ch = roman[len-1];
    int sum = myMap[ch];

    for(int i = len - 2; i >= 0; i--){
        char ch = roman[i];
        cout<<ch<<endl;
        int a = myMap[roman[i]];
        int b = myMap[roman[i+1]];
        cout<<sum<<":"<<a<<":"<<b<<endl;
        if(a < b){
            sum = sum - a;
        }
        else{
            sum = sum + a;
        }
    }
    cout<< sum << endl;
}
