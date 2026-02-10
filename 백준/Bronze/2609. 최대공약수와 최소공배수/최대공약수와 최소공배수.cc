#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    // 최대공약수 찾기
    int less = min(a, b);
    int more = max(a, b);
    for(int i = less; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            cout << i << "\n";
            break;
        }
    }

    int trial = 1;
    // 최소공배수 찾기
    while(true){
        if((trial * less) % more == 0){
            cout << trial * less;
            break;
        }

        trial++;
    }
}