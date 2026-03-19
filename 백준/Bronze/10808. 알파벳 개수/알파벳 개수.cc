#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 배열 26짜리, 0 넣음. (fill)
    // S에서 alphabet 1나씩 받으면서
    // 인덱스가 (alphabet - 'a')인 곳에 ++하기. 
    // 출력: 배열의 각 원소

    int arr[26];
    fill(arr, arr + 26, 0);

    string S;
    cin >> S;

    for(char c : S){
        arr[c - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }

}