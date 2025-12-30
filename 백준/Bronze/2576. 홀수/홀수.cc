#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> oddnumbers;
  int result;
  int sum_odd = 0;
  bool odd_exists = false;
  for(int i = 0; i < 7; i++){
    cin >> result;

    if(result % 2 == 1){
      odd_exists = true;
      oddnumbers.push_back(result);
      sum_odd += result;
    }
  }

  sort(oddnumbers.begin(), oddnumbers.end());
  if(!odd_exists){
    cout << -1;
  } else {
    cout << sum_odd << "\n";
    cout << oddnumbers[0];
  }
}