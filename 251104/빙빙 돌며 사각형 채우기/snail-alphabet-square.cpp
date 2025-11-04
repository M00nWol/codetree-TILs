#include <iostream>
using namespace std;



bool InRange(int x, int y, int n, int m){
    return x>=0 && x<n && y>=0 && y<m;
}

int main() {
    int n, m;
    int dx[4] = {0, 1, 0, -1},dy[4] = {1,0,-1,0};
    int dir = 0;
    int cur_x, cur_y;
    int nx=0, ny=0;
    char arr[100][100]={};

    cin >> n >> m;

    arr[nx][ny] = 'A';

    for(int i=1; i<n*m; i++){
        cur_x = nx+dx[dir];
        cur_y = ny+dy[dir];

        

        if(!(InRange(cur_x , cur_y, n, m))||arr[cur_x][cur_y]!=0){
            dir = (dir+1)%4;
        }

        nx += dx[dir];
        ny += dy[dir];

        arr[nx][ny] = 'A'+i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}