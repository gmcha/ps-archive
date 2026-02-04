#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i = 1; i <= N - 1; i++){
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }

    for(int j = 0; j < N; j++) cout << "*";
    cout << "\n";
    
    for(int i = 1; i <= N - 1; i++){
        for(int j = N - i; j > 0; j--) cout << "*";
        cout << "\n";
    }
}