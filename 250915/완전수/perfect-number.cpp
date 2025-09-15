#include <iostream>

using namespace std;

int st, ed, sum, cnt;

int main() {
    cnt = 0;

    cin >> st >> ed;

    for(int i=st; i<=ed; i++){
        sum = 0;
        for(int j=1; j<i; j++){
            if(i%j==0){
                sum += j;
            }
        }

        if(sum == i){
            cnt++;
        }
    }

    cout << cnt;
    

    return 0;
}
