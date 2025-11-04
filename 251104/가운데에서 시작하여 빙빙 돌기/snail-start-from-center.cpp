#include <iostream>
using namespace std;

int main() {
    int n;
    int nx, ny;
    int tmpx, tmpy;
    int dx[4] = {0,-1,0,1},dy[4]={1,0,-1,0};
    int arr[100][100] ={};
    int dir = 3;

    cin >> n;

    nx = n/2;
    ny = n/2;
    arr[nx][ny] = 1;
    
    

    for(int i=2; i<=n*n; i++){  

        dir = (dir+1)%4;
        tmpx = nx+dx[dir];
        tmpy = ny+dy[dir];


        if(arr[tmpx][tmpy]!=0){
            dir = (dir+3)%4;
        }

        nx += dx[dir];
        ny += dy[dir];
        arr[nx][ny] = i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}