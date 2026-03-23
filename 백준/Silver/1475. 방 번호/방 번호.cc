#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 입력: 방 번호 N
    int N;
    cin >> N;

    // arr[10] 생성. 각 원소 0
    // 각 digit에 대하여, arr[digit - 'a']++
    int arr[10] = {};

    while(N > 0){
        int digit = N % 10;
        arr[digit]++;
        N /= 10;
    }
    
    // 9, 6일 때의 처리
    int sum = arr[6] + arr[9];
    if(sum % 2 == 1) sum += 1;
    sum /= 2;

    arr[6] = sum;
    arr[9] = sum;

    // max값 찾기
    int max_num = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] > max_num) max_num = arr[i];
    }

    cout << max_num;

}