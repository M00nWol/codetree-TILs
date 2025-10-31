#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m){
    return (0<=x && x<m && 0<=y && y<n);
}

int main() {
    int dx[4] = {1, 0, -1,0}, dy[4]={0,1,0,-1};
    int n, m;
    int x, y;
    int tmpx, tmpy;
    int dir;
    int a[100][100]= {};

    cin >> n >> m;

    x = 0;
    y = 0;
    dir = 0;

    a[x][y] = 1;

    for(int i=2; i<=n*m; i++){
            tmpx = x + dx[dir];
            tmpy = y + dy[dir];

            if(InRange(tmpx, tmpy, n, m)==0 || a[tmpy][tmpx]!=0){

                dir = (dir+1)%4;
            }

            x += dx[dir];
            y += dy[dir];
            a[y][x] = i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}