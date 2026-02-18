#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N, nth_N;
        int sum = 0;
        cin >> N;
        for(int j = 0; j < N; j++) {
            cin >> nth_N;
            sum += nth_N;
        }
        cout << sum << "\n";
    }
}