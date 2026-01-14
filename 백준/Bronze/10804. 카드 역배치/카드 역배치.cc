#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 초기 arr 세팅
    int arr[21];
    for(int i = 1; i <= 20; i++){
        arr[i] = i;
    }

    int a, b;
    int copy[21];
    // 구간 10개 입력
    for(int i = 0; i < 10; i++){
        cin >> a >> b;
        int length = b - a + 1;
        for(int i = 0; i < length/2; i++){
            swap(arr[a + i], arr[b - i]);
        }
    }

    for(int i = 1; i <= 20; i++){
        cout << arr[i] << " ";
    }
}