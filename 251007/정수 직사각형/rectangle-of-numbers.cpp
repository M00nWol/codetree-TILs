#include <iostream>
using namespace std;

int main() {
    int n, m;
    int cnt = 1;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}