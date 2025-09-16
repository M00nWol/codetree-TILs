#include <iostream>
using namespace std;

int main() {
    char c;
    int tem;
    int emer_cnt = 0;
    int res[4] = {};

    for(int i=0; i<3; i++){
        cin >> c >> tem;

        if(c=='Y'){
            if(tem>=37) res[0]++;
            else res[2]++;
        } else {
            if(tem>=37) res[1]++;
            else res[3]++;
        }
    }

    for(int i=0; i<4; i++){
        cout << res[i] << " ";
    }

    if(res[0]>=2) cout << 'E';
    return 0;
}