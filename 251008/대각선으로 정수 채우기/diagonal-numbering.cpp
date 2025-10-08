#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int arr[n][m];
    int cnt = 1;
    int tmp;

    for(int col=0; col<m; col++){
        tmp = col;
        for(int row=0; row<=col; row++){
            if(row>=n) {
                break;
            }
            arr[row][tmp] = cnt;
            tmp--;
            cnt++;
        }
    }

    for(int row=1;row<n; row++){
        tmp = row;
        int col = m-1;
        while(tmp<n && col>=0){
            arr[tmp][col] = cnt;
            tmp++;
            col--;
            cnt++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] <<  " ";
        }
        cout << endl;
    }
    return 0;
}
