#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    // 입력: N개의 명령어

    // stack
    stack<int> S;

    for(int i = 0; i < N; i++){
        string command;
        cin >> command;

        if(command == "push") {
            int X;
            cin >> X;

            S.push(X);
        } else if (command == "pop") {
            // 스택에 정수가 있는 경우
            if(S.size() == 0) {
                cout << "-1" << "\n";
            } else {
                cout << S.top() << "\n";
                S.pop();
            }
        } else if (command == "size") {
            cout << S.size() << "\n";
        } else if (command == "empty") {
            if(S.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (command == "top") {
            if(S.size() == 0) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
            }
        }
    }
}