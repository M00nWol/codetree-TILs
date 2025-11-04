#include <iostream>
using namespace std;

int n, m;

bool InRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<m;
}

int main() {
    int dx[4] = {0,1,0,-1}, dy[4]={1,0,-1,0};
    int arr[100][100] = {};
    int tmpx, tmpy;
    int x = 0;
    int y = 0;
    int dir = 0;

    arr[y][x] = 1;


    cin >> n >> m;
    for(int i=2; i<=n*m; i++){
        tmpx = x+dx[dir];
        tmpy = y+dy[dir];
        if(!(InRange(tmpy, tmpx)) || arr[tmpy][tmpx]!=0){
            dir = (dir+1)%4;
        }

        x = x+dx[dir];
        y = y+dy[dir];

        arr[y][x] = i;

    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}