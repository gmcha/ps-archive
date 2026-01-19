#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i = 1; i <= N - 1; i++){
        int j = 0;
        for(; j < i; j++) cout << "*";
        for(; j < 2*N - i; j++) cout << " ";
        for(; j < 2*N; j++) cout << "*";
        cout << "\n";
    }

    // N번째 줄
    for(int i = 1; i <= 2*N; i++) cout << "*";
    cout << "\n";

    for(int i = N - 1; i >= 1; i--){
        int j = 0;
        for(; j < i; j++) cout << "*";
        for(; j < 2*N - i; j++) cout << " ";
        for(; j < 2*N; j++) cout << "*";
        cout << "\n";
    }
}