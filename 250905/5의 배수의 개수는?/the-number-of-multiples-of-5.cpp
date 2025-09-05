#include <iostream>
using namespace std;

int main() {
    int mat[4][4];
    int cnt = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(mat[i][j]%5==0) cnt++;
        }
    }

    cout << cnt;
    return 0;
}