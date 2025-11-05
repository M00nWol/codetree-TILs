#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[20][20];
    int max_value = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            max_value = max(max_value, arr[i][j]+arr[i][j+1]+arr[i][j+2]);
        }
    }

    cout << max_value;
    return 0;
}