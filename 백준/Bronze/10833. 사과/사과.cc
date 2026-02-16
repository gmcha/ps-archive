#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int leftovers = 0;
    int students, apples;
    for(int i = 0; i < N; i++){
        cin >> students >> apples;
        leftovers += apples % students;
    }
    cout << leftovers;
}