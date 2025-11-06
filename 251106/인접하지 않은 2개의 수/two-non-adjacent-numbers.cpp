#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int arr[100];
    int res = INT_MIN;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-3; i++){
        for(int j=i+2; j<=n-1;j++){
            res = max(res, arr[i]+arr[j]);
        }
    }

    cout << res;
    return 0;
}