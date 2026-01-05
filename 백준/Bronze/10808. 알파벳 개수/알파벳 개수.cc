#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int alphabets[27] = {};
  for(auto c : s){
    alphabets[(c-int('a'))]++;
  }
  for(int i = 0; i < 26; i++){
    cout << alphabets[i] << " ";
  }
}