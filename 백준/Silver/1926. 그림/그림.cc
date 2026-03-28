#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
int vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    // 그림의 개수, 가장 넓은 넓이
    int num_pics = 0, max_area = 0;

    // 각 그림 뭉치의 시작점에 대하여
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] || board[i][j] != 1) continue;

            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i, j});
            num_pics++;

            int cur_area = 0;
            while(!Q.empty()){
                pair<int, int> cur = Q.front(); Q.pop(); cur_area++;

                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            max_area = max(max_area, cur_area);
        }
    }
    
    cout << num_pics << "\n" << max_area;
}