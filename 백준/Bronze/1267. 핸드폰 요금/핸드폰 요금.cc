#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int arr[21];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 영식 요금제 - 30초, 10원
    int sum_y = 0;
    for(int i = 0; i < n; i++){
        sum_y += (int(arr[i] / 30) + 1) * 10;
    }

    // 민식 요금제
    int sum_m = 0;
    for(int i = 0; i < n; i++){
        sum_m += (int(arr[i] / 60) + 1) * 15;
    }

    if(sum_y == sum_m){
        cout << "Y M " << sum_m; 
    } else if (sum_m < sum_y){
        cout << "M " << sum_m; 
    } else {
        cout << "Y " << sum_y; 
    }
}