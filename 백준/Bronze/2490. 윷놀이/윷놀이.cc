#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr1[4], arr2[4], arr3[4];
  for(int i = 0; i < 4; i++){
    cin >> arr1[i];
  }
  for(int i = 0; i < 4; i++){
    cin >> arr2[i];
  }
  for(int i = 0; i < 4; i++){
    cin >> arr3[i];
  }

  int result;
  result = count(arr1, arr1 + 4, 0);
  if(result == 1) cout << "A" << "\n";
  else if (result == 2) cout << "B" << "\n";
  else if (result == 3) cout << "C" << "\n";
  else if (result == 4) cout << "D" << "\n";
  else if (result == 0) cout << "E" << "\n";

  result = count(arr2, arr2 + 4, 0);
  if(result == 1) cout << "A" << "\n";
  else if (result == 2) cout << "B" << "\n";
  else if (result == 3) cout << "C" << "\n";
  else if (result == 4) cout << "D" << "\n";
  else if (result == 0) cout << "E" << "\n";

  result = count(arr3, arr3 + 4, 0);
  if(result == 1) cout << "A" << "\n";
  else if (result == 2) cout << "B" << "\n";
  else if (result == 3) cout << "C" << "\n";
  else if (result == 4) cout << "D" << "\n";
  else if (result == 0) cout << "E" << "\n";


}