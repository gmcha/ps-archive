#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string name;
    int d, m, y;

    // youngest
    int max_y = 1990;
    int max_m = 1;
    int max_d = 1;
    string max_name;

    // oldest
    int min_y = 2010;
    int min_m = 12;
    int min_d = 31;
    string min_name;
    for(int i = 0; i < n; i++){
        cin >> name >> d >> m >> y;
        if (y < max_y) {
        } else if (y == max_y){
            if(m < max_m) {}
            else if (m == max_m) {
                if(d < max_d) {}
                else {
                    max_d = d;
                    max_name = name;
                }
            } else {
                max_m = m;
                max_d = d;
                max_name = name;
            }
        } else {
            max_y = y;
            max_m = m;
            max_d = d;
            max_name = name;
        }

        if (y > min_y) {
        } else if (y == min_y){
            if(m > min_m) {}
            else if (m == min_m) {
                if(d > min_d) {}
                else {
                    min_d = d;
                    min_name = name;
                }
            } else {
                min_m = m;
                min_d = d;
                min_name = name;
            }
        } else {
            min_y = y;
            min_m = m;
            min_d = d;
            min_name = name;
        }
    }

    cout << max_name << "\n" << min_name;
}