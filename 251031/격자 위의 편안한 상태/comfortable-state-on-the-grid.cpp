#include <iostream>
using namespace std;

int n, m;
int arr[100][100] = {}; // 색칠X: 0 , 색칠O : 1

bool ColorCheck(int r, int c, int n){
    if(r>=0 && r<n && c>=0 && c<n && arr[r][c]){
        return true;
    }
    return false;
}


// 격자는 x-y와 행렬 연결 조심하기
int main() {
    int r, c;
    int dir, tmpr, tmpc;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
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
            if(ColorCheck(tmpr, tmpc, n)){
                cnt3++;
            }
        }


        cout << (cnt3==3)?1:0;
        cout << endl;
    }

    return 0;
}