#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum;
    cin >> sum;
    
    int book_price;
    for(int i = 0; i < 9; i++){
        cin >> book_price;
        sum -= book_price;
    }
    cout << sum;
}