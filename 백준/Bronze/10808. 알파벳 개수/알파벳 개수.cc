#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 배열 - 26개 (각 알파벳의 수 들어 있음)
    // 초반 배열 -> 모든 원소 0
    int arr[26] = {};

    // 입력: 알파벳 소문자로만 이루어진 단어 S
    string S;
    cin >> S;

    // 각 알파벳에 대하여, arr˜[알파벳-'a']++
    for(char c : S) {
        arr[c - 'a']++;
    }

    // 출력: 배열의 모든 원소
    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
}