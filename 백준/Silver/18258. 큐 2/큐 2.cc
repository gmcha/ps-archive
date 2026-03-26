#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // queue
    // O(N)대만 가능
    // 주어지는 정수 - int

    int N;
    cin >> N;

    queue<int> Q;

    for(int i = 0; i < N; i++){
        string command;
        cin >> command;

        if(command == "push") {
            int X;
            cin >> X;
            Q.push(X);
        } else if (command == "pop") {
            if(Q.empty()) {
                cout << "-1" << "\n";
            } else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if (command == "size") {
            cout << Q.size() << "\n";
        } else if (command == "empty") {
            cout << (int)Q.empty() << "\n";
        } else if (command == "front") {
            if(Q.empty()) {
                cout << "-1" << "\n";
            } else {
                cout << Q.front() << "\n";
            }
        } else if (command == "back") {
            if(Q.empty()) {
                cout << "-1" << "\n";
            } else {
                cout << Q.back() << "\n";
            }
        }

    }
}