#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  int smallNum = min(a, b);
  int bigNum = max(a, b);

  // 두 수 사이의 수 개수
  int count = 0;
  for(int i = smallNum + 1; i < bigNum; i++){
    count++;
  }
  cout << count << "\n";

  // 두 수 사이의 수 오름차순
  for(int i = smallNum + 1; i < bigNum; i++){
    cout << i << " ";
  }

}