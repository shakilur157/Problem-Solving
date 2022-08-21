#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the primeCount function below.
 */
 bool isPrime(unsigned long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (unsigned long long int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
long long int primeCount(long long int n) {

    long long int count = 0;
    unsigned long long int prod = 1;
    if(n==1)return 0;

    for(unsigned long long int i = 2; i <= n; i++){
        if(isPrime(i)){
            prod *= i;
            if(prod <= n){
                count++;
//                prod *= i;
//                cout<<prod<<"==="<<i<<endl;
            }else{
                break;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long long int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (long long int q_itr = 0; q_itr < q; q_itr++) {
        unsigned long long int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long long int result = primeCount(n);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
