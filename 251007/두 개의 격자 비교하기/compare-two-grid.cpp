#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10];
    int c[10][10] = {};
    int n, m;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> b[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] != b[i][j]){
                c[i][j] = 1;
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}