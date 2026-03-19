#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 배열(10개 칸) - 초기값 0
    // 입력: A, B, C
    // product 찾기
    
    // (product의 각 자릿수를 순회하며) - 10번 이하
    // [인덱스: 그 자리에 수]에 ++하기

    // 출력: 각 배열 칸의 값 반환

    int arr[10];
    fill(arr, arr + 10, 0);

    int A, B, C;
    cin >> A >> B >> C;
    int product = A*B*C;

    while(product > 0) {
        int digit = product % 10;
        arr[digit]++;
        product /= 10;
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << "\n";
    }

}