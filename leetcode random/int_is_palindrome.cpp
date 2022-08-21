#include <bits/stdc++.h>

using namespace std;

int main(){
    int number = 1221, number1 = 1221;
    long long revNumber = 0;
    if(number < 0){
        cout<<"false"<<endl;
    }
    else{
        while(number%10){
            revNumber = revNumber * 10 + (number % 10);
            number = number / 10;
        }
    }
    if(revNumber == number1){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
