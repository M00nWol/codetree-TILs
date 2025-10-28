#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[1000];
    int cnt = 0;
    int ans = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(i>=1 && (a[i-1]*a[i] > 0)){
            cnt++;
        } else {
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}