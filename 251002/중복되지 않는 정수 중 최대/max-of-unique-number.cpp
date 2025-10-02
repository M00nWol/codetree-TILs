#include <iostream>

using namespace std;

int n;
int arr[1000];
int cnt[1000] = {};

int main() {
    int max;
    bool ex = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        cnt[arr[i]-1]++;
    }

    for(int i=999; i>=0; i--){
        if(cnt[i]==1){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
