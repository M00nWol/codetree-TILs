#include <iostream>
using namespace std;

int GetDir(char c){
    if(c=='W'){
        return 1;
    } else if(c=='S'){
        return 2;
    } else if(c=='N'){
        return 3;
    } else {
        return 0;
    }
    return -1;
}

int main() {
    int n, d;
    int c;
    int dx[4] = {1,-1,0,0}, dy[4] = {0,0,-1,1};
    int dir, x, y;
    int inx, iny;
    int t = 1;

    cin >> n;

    x = 0;
    y = 0;
    dir = -1;

    for(int i=0; i<n; i++){
        cin >> c >> d;

        dir = GetDir(c);
        inx = dx[dir];
        iny = dy[dir];
        cout << dir << endl'



        while(d--){
            x += inx;
            y += iny;
            cout << x << y << endl;

            t++;
        }
    }

    cout << -1;
    return 0;
}