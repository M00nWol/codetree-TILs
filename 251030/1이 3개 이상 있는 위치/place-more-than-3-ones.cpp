#include <iostream>
using namespace std;

bool InRange(int x, int y, int n){
    return x>=0 && x<=n && y>=0 && y<=n;
}

int main() {
    int n, r, c;
    int arr[100][100];
    int dx[4] = {1,-1,0,0}, dy[4]={0,0,-1,1};
    int cnt1 = 0;
    int cnt = 0;


    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cnt1 = 0;
            for(int dir=0; dir<4; dir++){
                r = i + dx[dir];
                c = j + dx[dir];
                if(InRange(r,c,n-1)&&arr[r][c]==1){
                    cout << i << " " << j << " " << dir << " " r << " " << c <<endl;
                    cnt1++;
                }
                if(cnt1>=3){
                    cout << i << " " << j << endl;
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}