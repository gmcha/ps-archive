#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[9];
  int sum = 0;
  for(int i = 0; i < 9; i++){
    cin >> arr[i];
    sum += arr[i];
  }

  sort(arr, arr + 9);
  

  int fake1, fake2;
  for(int i = 0; i < 8; i++){
    for(int j = i + 1; j < 9; j++){
      if((sum - arr[i] - arr[j]) == 100){
        fake1 = i;
        fake2 = j;
        break;
      }
    }
  }

  for(int i = 0; i < 9; i++){
    if(i != fake1 && i != fake2) cout << arr[i] << "\n";
  }
}