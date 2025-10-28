#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, t, arr[1000];
    int cnt = 0;
    int ans = 0;

    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>t){
            cnt++;
        } else {
            cnt = 0;
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}