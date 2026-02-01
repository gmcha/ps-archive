#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    char comma;
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> comma >> B;
        cout << A + B << "\n";
    }
}