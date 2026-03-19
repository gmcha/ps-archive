#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 재료: 배열[10], 원소 모두 0
    int arr[10] = {};

    // 입력: 자연수 A, B, C
    int A, B, C;
    cin >> A >> B >> C;

    // A*B*C = product일 때, product의 각 자릿수 digit에 대하여 arr[digit]++
    int product = A*B*C;

    while(product > 0) {
        int digit = product % 10;
        arr[digit]++;
        product /= 10;
    }

    // 출력: arr의 각 원소
    for(int i = 0; i < 10; i++){
        cout << arr[i] << "\n";
    }
}