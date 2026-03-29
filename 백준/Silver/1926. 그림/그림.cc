#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
int vis[502][502];
int n, m;
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

    int num_pics = 0, max_area = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] || board[i][j] != 1) continue;
            num_pics++;
            vis[i][j] = 1;
            Q.push({i, j});

            int cur_area = 0;
            cur_area++;
            while(!Q.empty()){
                pair<int, int> cur = Q.front(); Q.pop();

                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    cur_area++;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            max_area = max(max_area, cur_area);
            
        }
    }

    cout << num_pics << "\n" << max_area;
}