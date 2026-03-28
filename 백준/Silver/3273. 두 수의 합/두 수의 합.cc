#include <bits/stdc++.h>
using namespace std;

int n, x;
int arr[100002];
int occur[2000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> x;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(x >= arr[i] && occur[x-arr[i]]){ // 존재 한다면
            ans++;
        }
        occur[arr[i]]++;
    }


    cout << ans;
}