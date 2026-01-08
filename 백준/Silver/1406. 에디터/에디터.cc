#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> editor; // 선언
    
    // 연결 리스트에 값 넣고
    string s;
    cin >> s;
    for(auto c : s){
        editor.push_back(c);
    }
    auto t = editor.end(); // iterator 세팅

    int trials;
    cin >> trials;
    while(trials > 0){
        char command;
        cin >> command;

        if(command == 'L'){
            if(t != editor.begin()){
                t--;
            }
        } else if (command == 'D'){
            if(t != editor.end()){
                t++;
            }
        } else if (command == 'B') {
            if(t != editor.begin()){
                t--;
                t = editor.erase(t);
            }
        } else if (command == 'P') {
            char input;
            cin >> input;
            editor.insert(t, input);
        }
        trials--;
    }

    for(auto letter : editor) {
        cout << letter;
    }

}