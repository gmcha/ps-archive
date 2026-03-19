#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    // 입력: N
    int N;
    cin >> N;

    // 방 번호의 각 자릿수를 배열에 넣음
    int arr[10] = {};

    while(N > 0) {
        int digit = N % 10;
        arr[digit]++;
        N /= 10;
    }
    
    // 6과 9의 처리 이후, index6/9는 처리 수로 채워넣기
    int sum = arr[6] + arr[9];
    if(sum % 2 == 1) {
        sum += 1;
    }
    sum /= 2; // 6, 9 처리 수

    arr[6] = sum;
    arr[9] = sum;
    
    // 배열의 수 중 가장 큰 수를 찾기
    int max_num = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] > max_num) max_num = arr[i];
    }

    // (그 수 반환)
    cout << max_num;



}