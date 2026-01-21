#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    int maxNum = 0;
    int maxIdx;
    for(int i = 1; i <= 9; i++){
        cin >> x;
        if(x > maxNum) {
            maxNum = x;
            maxIdx = i;
        }
    }
    cout << maxNum << "\n";
    cout << maxIdx;
}