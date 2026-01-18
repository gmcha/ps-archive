#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        // 1~5번 줄
        for(int k = 0; k < N - i; k++){
            cout << " ";
        }
        for(int j = 0; j < 2*i - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }

    for(int n = N - 1; n >= 1; n--){
        // 나머지 N-1 줄
        for(int l = 0; l < N - n; l++) cout << " ";
        for(int m = 0; m < 2*n - 1; m++) cout << "*";
        cout << "\n";
    }
}