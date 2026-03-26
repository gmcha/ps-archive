#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 가장 최근 수 -> 추가/삭제 (Stack!!)
    // 최종 수의 합 (int)

    // Stack에 최대 100,000개의 int
    // "0"일 경우에 가장 최근 쓴 수를 지우기

    int K;
    cin >> K;

    stack<int> S;
    for(int i = 0; i < K; i++){ // O(N)까지만 가능
        int num;
        cin >> num;

        if(num == 0) S.pop();
        else S.push(num);
    } 

    int sum = 0;
    while(!S.empty()) {
        sum += S.top();
        S.pop();
    }

    cout << sum;
}