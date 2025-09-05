#include <iostream>

using namespace std;

int st, ed;

int main() {
    int cnt = 0;
    int mea;

    cin >> st >> ed;

    for(int i=st; i<=ed; i++){
        mea = 0;
        for(int j=1; j<=i; j++){
            if(mea>=4) break;
            if(i%j==0) mea++;
        }
        if(mea==3){
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}
