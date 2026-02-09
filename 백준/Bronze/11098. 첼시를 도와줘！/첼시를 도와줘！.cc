#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p;
    cin >> n;

    int p_salary;
    int most_salary = 0;
    string p_name;
    string target_player;
    for(int i = 0; i < n; i++){
        cin >> p;
        for(int j = 0; j < p; j++){
            cin >> p_salary >> p_name;
            if (p_salary > most_salary){
                most_salary = p_salary;
                target_player = p_name;
            }
        }
        cout << target_player << "\n";
        most_salary = 0;
    }
}