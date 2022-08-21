#include <bits/stdc++.h>

using namespace std;

long long marcsCakewalk(vector <long long> calorie,long n) {
    // Complete this function
    sort(calorie.begin(),calorie.end());
    long long sum = 0,j=0;
    for(int i=n-1;i>=0;i--)
    {
        sum= sum+(calorie[i]*pow(2,j));
        j++;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long long> calorie(n);
    for(int calorie_i = 0; calorie_i < n; calorie_i++){
       cin >> calorie[calorie_i];
    }
    long long result = marcsCakewalk(calorie,n);
    cout << result << endl;
    return 0;
}
