#include <iostream>
using namespace std;

bool InRange(int x, int y, int n){
    return x>=0 && x<n && y>=0 && y<n;
}

int main() {
    int n;
    char arr[1000][1000] = {};
    int dx[4] = {0, -1, 0, 1}, dy[4] = {1,0,-1,0};
    int dir;
    int k;
    int q, xo;
    int r, c;
    int cnt = 0;

    cin >> n;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    cin >> k;

    k--;
    q = k/n;
    xo = k%n;
    dir = q;

    if(q%2==0){
        r = q%n;
        c = (q>=2)?(n-1-xo):xo;
    } else {
        r = (q>=2)?(n-1-xo):xo;
        c = q%n;
    }

    //  cout << dir << endl;
    //  cout << r << " "<< c << endl;

    while(InRange(r, c, n)){
        cnt++;
        //cout << arr[r][c] << endl;
        if(arr[r][c]=='\\'){
            if(dir%2==0){
                dir = (dir+3)%4;
            } else{
                dir = (dir+1)%4;
            }
        } else if(arr[r][c] == '/'){
            if(dir%2!=0){
                dir = (dir+3)%4;
            } else{
                dir = (dir+1)%4;
            }
        }

        r += dy[dir];
        c += dx[dir];
        // cout << dir << endl;
        // cout << r << " "<< c << endl;
    }

    cout << cnt;
    return 0;
}