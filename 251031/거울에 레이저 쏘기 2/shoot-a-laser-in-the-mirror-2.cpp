#include <iostream>
using namespace std;

bool InRange(int r, int c, int n){
    return r>=0 && r<n && c>=0 && c<n;
}

int main() {
    int n, k;
    int r, c, dir;
    int dx[4] = {0,-1,0,1}, dy[4] = {-1, 0, 1, 0};
    char arr[1000][1000] = {};
    int cnt=1;

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cin >> k;

    dir = k/n;

    if(dir%2==0){
        r = k/n;
        c = k%n-1;
    } else {
        r = k%n-1;
        c = k/n;
    }


    while(InRange(r, c, n)){
        cnt++;
        if((arr[r][c]=='\\'&&dir%2==1)||(arr[r][c]=='/'&&dir%2==0)){
            dir = (dir+1)%4;
        } else {
            dir = (dir+3)%4;
        }

        r += dy[dir];
        c += dx[dir];
    }

    cout << cnt;

    return 0;
}