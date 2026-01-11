#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sumOfOdds = 0;
    int leastOddNum =100;

    for(int i = 0; i < 7; i++){
        int a = 0; 
        cin >> a;

        if(a % 2 == 1) {
            sumOfOdds += a;
            if(a <= leastOddNum) leastOddNum = a;
        }
    }

    if(sumOfOdds == 0) cout << "-1";
    else {
        cout << sumOfOdds << "\n";
        cout << leastOddNum;
    }
}