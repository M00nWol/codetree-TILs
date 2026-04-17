#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y;
    int res = 0;

    cin >> x >> y;

    for(int i=x; i<=y; i++){
        int cnt[10] = {};
        string s = to_string(i);

        for(char c: s){
            cnt[c-'0']++;
        }

        int num = 0;
        bool one = false;

        for(int i=0; i<10; i++){
            if(cnt[i]>0){
                num++;
                if(cnt[i] == 1) one = true;
            }
        }

        if(num==2 && one) res++;
    }

    cout << res;
    return 0;
}