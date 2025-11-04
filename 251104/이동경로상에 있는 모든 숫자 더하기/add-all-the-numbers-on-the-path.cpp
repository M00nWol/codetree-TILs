#include <iostream>
using namespace std;

bool InRange(int x, int y, int n){
    return x>=0&&x<n&&y>=0&&y<n;
}

int main() {
    int n, t;
    int arr[100][100];
    int dx[4] = {0,1,0,-1}, dy[4]={1,0,-1,0};
    string s;
    int dir = 3;
    int sum = 0;
    int nx, ny;
    int tmpx, tmpy;

    cin >> n >> t >> s;

    nx = n/2;
    ny = n/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    sum += arr[nx][ny];

    for(int i=0; i<t; i++){
        if(s[i]=='L'){
            dir = (dir+3)%4;
        } else if(s[i]=='R'){
            dir = (dir+1)%4;
        } else {
            tmpx = nx + dx[dir];
            tmpy = ny + dy[dir];
            if(!InRange(tmpx, tmpy, n)){
                continue;
            }
            nx += dx[dir];
            ny += dy[dir];

            sum += arr[nx][ny];
        }
    }

    cout << sum;
    return 0;
}