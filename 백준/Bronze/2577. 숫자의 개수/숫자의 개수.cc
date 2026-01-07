#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nums[10] = {};
    int a, b, c;
    cin >> a >> b >> c;

    int product = a * b * c;
    while(product > 0) {
        nums[product % 10]++;
        product /= 10;
    }

    for(int i = 0; i < 10; i++){
        cout << nums[i] << "\n";
    }


}