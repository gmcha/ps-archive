#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;

    int item = 0;
    for(int i = 0; i < N; i++){
        cin >> item;
        if(item < X) cout << item << ' ';
    }
}