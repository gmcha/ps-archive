#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long a, b;
  cin >> a >> b;
  long long  smallNum = min(a, b);
  long long bigNum = max(a, b);

  // 두 수 사이의 수 개수
  long long count = 0;
  for(long long i = smallNum + 1; i < bigNum; i++){
    count++;
  }
  cout << count << "\n";

  // 두 수 사이의 수 오름차순
  for(long long i = smallNum + 1; i < bigNum; i++){
    cout << i << " ";
  }

}