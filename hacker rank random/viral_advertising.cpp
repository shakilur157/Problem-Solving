#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int people = 5;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
            people =(people/2);
            sum += people;
            people *= 3;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
