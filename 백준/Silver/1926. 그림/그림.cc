#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
int board[502][502];
int vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> Q;

    int num_pics = 0;
    int max_area = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] || board[i][j] != 1) continue; 
            Q.push({i, j});
            vis[i][j] = 1;
            num_pics++;

            int area = 0;
            while(!Q.empty()){
                pair<int, int> cur = Q.front(); Q.pop();
                area++;

                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue; 

                    Q.push({nx, ny});
                    vis[nx][ny] = 1;
                }
            }
            max_area = max(max_area, area);
        }
    }

    cout << num_pics << "\n" << max_area;
    
}