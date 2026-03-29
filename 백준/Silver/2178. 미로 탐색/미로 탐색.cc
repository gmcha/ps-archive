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

    for(int i = 0; i < 502; i++){
        for(int j = 0; j < 502; j++){
            vis[i][j] = -1;
        }
    }

    // 값 받기
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string row;
        cin >> row;

        for(int j = 0; j < m; j++){
            board[i][j] = (int)row[j] - (int)('0');
        }
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin >> board[i][j];
    //     }
    // }

    // 일반 BFS와 같게, 대신 한 for문에 distance 배열에 +1씩 한 값을 넣기
    queue<pair<int, int>> Q;
    vis[0][0] = 0;
    Q.push({0, 0});

    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();

        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] != -1 || board[nx][ny] != 1) continue;
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }

    // 마지막 칸의 크기 + 1 구하기
    cout << vis[n - 1][m - 1] + 1;

}