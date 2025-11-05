#include <iostream>
using namespace std;



int main() {
    int r, c;
    char arr[15][15];
    int cnt = 0;

    cin >> r >> c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    if(arr[0][0] == arr[r-1][c-1]){
        cout << 0;
        return 0;
    }

    for(int i=1; i<r; i++){
        for(int j=1; j<c; j++){
            if(arr[0][0] != arr[i][j]){
                for(int k=i+1; k<r-1; k++){
                    for(int l=j+1; l<c-1; l++){
                        if(arr[i][j] != arr[k][l]){
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;
}