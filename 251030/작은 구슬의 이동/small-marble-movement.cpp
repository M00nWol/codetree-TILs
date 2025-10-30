#include <iostream>
using namespace std;

int GetDir(char c){
    if(c=='U'){
        return 1;
    } else if(c=='D'){
        return 2;
    } else if(c=='R'){
        return 0;
    } else {
        return 3;
    }
}

bool InRange(int x, int y, int n){
    return x>=1 && x<=n && y>=1 && y<=n;
}


int main() {
    int n, t;
    int x, y, idx;
    int nx, ny;
    char c;
    int dx[4] = {0,-1,1,0};
    int dy[4] = {1,0,0,-1};
    cin >> n >> t;
    cin >> x >> y >> c;

    idx = GetDir(c);
    

    for(int i=0; i<t; i++){
        nx = x+dx[idx];
        ny = y+dy[idx];

        if(!InRange(nx, ny ,n)){
            idx = 3 - idx;
            continue;
        }

        x += dx[idx];
        y += dy[idx];
    }

    cout << x << " " << y;
    return 0;
}