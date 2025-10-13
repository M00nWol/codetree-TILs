#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a, b;
    int arr[9][9] = {};

    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        arr[a-1][b-1] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}