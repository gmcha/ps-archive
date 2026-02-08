#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    int sum = 0;
    int count = 0;
    int least = 10001;


    for(int i = 1; i <= 100; i++){
        if(i*i >= m && i*i <= n){
            count++;
            sum += i*i;
            if(i*i < least) least = i*i;
        }
    }

    if(count == 0) cout << -1;
    else {
        cout << sum << "\n" << least;
    }
}