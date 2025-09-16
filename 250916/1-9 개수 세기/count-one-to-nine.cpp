#include <iostream>
using namespace std;

int main() {
    int cnt[9] = {};

    int n, arr[100];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cnt[arr[i]-1]++;
    }

    for(int i=0; i<9; i++){
        cout << cnt[i] << endl;
    }

    return 0;
}