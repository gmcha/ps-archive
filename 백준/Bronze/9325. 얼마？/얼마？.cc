#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    int s, n, q, p;
    for(int i = 0; i < N; i++){
        cin >> s;
        sum += s;

        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> q >> p;
            sum += q * p;
        }
        cout << sum << "\n";
        sum = 0;
    }
}