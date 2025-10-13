#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[9][9] = {};
    int cnt = 1;

    int r, c;

    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> r >> c;
        arr[r-1][c-1] = cnt;
        cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}