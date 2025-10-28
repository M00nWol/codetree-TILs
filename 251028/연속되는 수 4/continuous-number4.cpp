#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[1000];
    int cnt = 0; 
    int ans = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(i>=1 && (arr[i]-arr[i-1] > 0)){
            cnt++;
        } else {
            cnt = 1;
        }

        ans = max(ans, cnt);
    }


    cout << ans;
    return 0;
}