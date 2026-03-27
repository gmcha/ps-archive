#include <bits/stdc++.h>
using namespace std;

int arr[10000002];
int numbers[10000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // n개의 int (a)
    // x: int (sum)
    // 출력: 쌍의 수
    // O(n), 1.2억 / 4  -> 3000만

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        numbers[arr[i]] = 1;
    }

    int x;
    cin >> x;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) continue;
        if(numbers[x - arr[i]]) ans++; 
    }

    cout << ans / 2;


}