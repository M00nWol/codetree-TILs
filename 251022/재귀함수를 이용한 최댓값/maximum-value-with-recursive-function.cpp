#include <iostream>

using namespace std;

int n;
int arr[100];

int max(int M, int idx){
    if(idx==-1){
        return M;
    }

    if(arr[idx]>M){
        M = arr[idx];
    }

    return max(M, idx-1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max(arr[n-1], n-2);

    return 0;
}