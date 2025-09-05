#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    int tmp;
    cin >> n;

    int mat[n][n];

    for(int i=0; i<n; i++){
        cnt = 1;
        for(int j=0; j<n; j++){
            mat[i][j] = cnt;
            cnt++;
        }

        if(i%2==0){
            for(int j=0; j<n; j++){
                cout << mat[i][j];
            }
        } else{
            for(int j=n-1; j>=0; j--){
                cout << mat[i][j];
            }
        }

        cout << endl; 
    }
    return 0;
}