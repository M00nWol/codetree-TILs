#include <iostream>
using namespace std;

    int n, m;

bool InRange(int x, int y){
    return x>=0&&x<n&&y>=0&&y<m;
}

int main() {
    int cnt = 0;
    int x1, x2, y1, y2;
    string s[50];
    int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1}, dy[8] = {1,1,0,-1,-1,-1,0,1};
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j]!='L') {
                continue;
            }
            for(int dir=0; dir<8; dir++){
                x1 = i+dx[dir];
                x2 = x1+dx[dir];
                y1 = j+dy[dir];
                y2 = y1+dy[dir];
                if(InRange(x1, y1)&&s[x1][y1]=='E'&&InRange(x2,y2)&&s[x2][y2]=='E'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}