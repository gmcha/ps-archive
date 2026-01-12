#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int log[n];
    for(int i = 0; i < n; i++){
        cin >> log[i];
    }

    // 영식 요금제
    int sumY = 0;
    for(int i = 0; i < n; i++){
        sumY += ((log[i] / 30) + 1) * 10;
    }

    // 민식 요금제
    int sumM = 0;
    for(int i = 0; i < n; i++){
        sumM += ((log[i] / 60) + 1) * 15;
    }

    if(sumY == sumM){
        cout << "Y M " << sumY;
    } else if (sumY < sumM){
        cout << "Y " << sumY;
    } else {
        cout << "M " << sumM;
    }
}