#include <iostream>
using namespace std;

int main() {
    int mat[4][4];
    int total;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<4; i++){
        total = 0;
        for(int j=0; j<4; j++){
            total += mat[i][j];
        }
        cout << total << endl;
    }
    return 0;
}