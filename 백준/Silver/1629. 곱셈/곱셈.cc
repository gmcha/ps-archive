#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int A, B, C;

ll func1(int A, int B, int C){
    // A^B % C
    if(B == 1) return A % C;

    // B가 짝수: A^(B/2) * A^(B/2) % C
    ll value = func1(A, B/2, C);
    value = value * value % C;

    if(B % 2 == 0) return value;
    // B가 홀수: (B가 짝수) * A % C
    return value * A % C;
    
    // 1일 때, A % C
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;

    cout << func1(A, B, C);

}