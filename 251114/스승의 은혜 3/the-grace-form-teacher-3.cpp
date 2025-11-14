#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, b, cnt;
    int cnt_max = 0;
    int p[1000] = {};
    int s[1000] = {};
    int finalp[1000] = {};
    int tmp[1000] = {};

    cin >> n >> b;

    for(int i=0; i<n; i++){
        cin >> p[i] >> s[i];
        finalp[i] = p[i]+s[i];
    }

    // 1명씩 반값
    for(int i=0; i<n; i++){
        cnt = 0;
        // 임시 배열
        for(int j=0; j<n; j++){
            tmp[j] = finalp[j];
        }

        tmp[i] -= (p[i]/2);

        sort(tmp, tmp+n);
        
        int idx = 0;

        while(b>0){
            b -= tmp[idx];
            if(b<0) break;
            cnt++;
            idx++;
        }

        cnt_max = max(cnt_max, cnt);
    }

    cout << cnt_max;
    return 0;
}