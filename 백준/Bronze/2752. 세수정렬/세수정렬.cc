#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  if(a <= b){
    if(a <= c){
      cout << a << " ";
      if(b <= c) cout << b << " " << c;
      else cout << c << " " << b;
    } 
    else {
      cout << c << " " << a << " " << b;
    }
  }else {
    if(b <= c) {
      cout << b << " ";
      if(a <= c) {
        cout << a << " " << c;
      }else cout << c << " " << a;
    }  else cout << c << " " << b << " " << a;
  }

}