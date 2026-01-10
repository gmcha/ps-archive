#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char results[5] = {'E', 'A', 'B', 'C', 'D'};

    int a;
    int countZeros = 0;
    int trials = 3;
    while(trials > 0){
        for(int i = 0; i < 4; i++){
            cin >> a;
            if(a == 0) countZeros++;
        }
        cout << results[countZeros] << "\n";
        countZeros = 0;

        trials--;
    }
    
    //도: 0 1 1 1 (1개) A
    //개: 0 0 1 1 (2개)
    //걸: 0 0 0 1
    //윷: 0 0 0 0 
    //모: 1 1 1 1
}