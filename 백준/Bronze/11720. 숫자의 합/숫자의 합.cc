#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    char char_num;
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> char_num;
        sum += char_num - '0';
    }

    cout << sum;
}