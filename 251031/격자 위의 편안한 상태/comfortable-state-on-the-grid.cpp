#include <iostream>
using namespace std;

int n, m;
int arr[100][100] = {}; // 색칠X: 0 , 색칠O : 1
int com[100][100] = {}; // 0: 편안하지 않은 상태, 1: 편안한 상태

bool ColorCheck(int r, int c, int n){
    if(r>=0 && r<n && c>=0, c<n){
        return (arr[r][c]==1);
    }
    return 0;
}


// 격자는 x-y와 행렬 연결 조심하기
int main() {
    int r, c;
    int dir, tmpr, tmpc;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int acnt = 0;
    int cnt3;

    cin >> n >> m;

    for(int i=0; i<m; i++){
        cnt3=0;
        cin >> r >> c;
        
        r--;
        c--;
        
        arr[r][c] = 1;
        for(int j=0; j<4; j++){
            tmpr = r+dy[j];
            tmpc = c+dx[j];
            if(ColorCheck(r, c, n)){
                cnt3++;
            }
        }

        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout << arr[j][k] << " ";
            }
            cout << endl;
        }

        cout << cnt3 << endl;

        cout << (acnt==3)?1:0;
        cout << endl;
    }

    return 0;
}