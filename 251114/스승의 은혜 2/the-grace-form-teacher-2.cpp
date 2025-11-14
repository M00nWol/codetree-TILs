#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, b;
    int money;
    int cnt;
    int cnt_max = 0;
    int p[1000] = {};

    cin >> n >> b;

    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    sort(p, p+n);

    for(int i=0; i<n; i++){
        money = b;
        cnt = 0;
        for(int j=0; j<n; j++){

            if(i==j){
                money -= (p[j]/2);
            } else {
                money -= p[j];
            }
            if(money<0){
                break;
            } else if(money==0){
                cnt++;
                break;
            } else {
                cnt++;
            }
        }

        cnt_max = max(cnt_max, cnt);
    }

    cout << cnt_max;
    return 0;
}