#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 재료: 배열[10], 각 원소 0
    int arr[10] = {};
    
    // 입력: 방 번호 N
    int N;
    cin >> N;

    // N의 digits마다, 배열[digit]++하기
    while(N > 0) {
        int digit = N % 10;
        arr[digit]++;
        N /= 10;
    }

    // arr[6] + arr[9] = sum, sum이 홀수면 ++하고 /2, 짝수면 그냥 /2
    int sum = arr[6] + arr[9];
    if(sum % 2 != 0) sum += 1;
    sum /= 2;

    // 그 값(변형된 sum)을 각 arr[6], arr[9]에 넣음
    arr[6] = sum;
    arr[9] = sum;

    // 배열의 원소 중, 최댓값 구하기
    int max_num = 0; 
    for(int i = 0; i < 10; i++){
        if(arr[i] > max_num) max_num = arr[i];
    }

    // 출력: 최댓값
    cout << max_num;
}