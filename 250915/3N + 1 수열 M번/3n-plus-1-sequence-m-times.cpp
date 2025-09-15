#include <iostream>
using namespace std;

int main() {
    int m, n;
    int cnt = 0;

    cin >> m;

    for(int i=0; i<m; i++){
        cnt = 0;
        cin >> n;

        while(n!=1){
            cnt++;
            if(n%2!=0){
                n = 3*n+1;
            } else {
                n /= 2;
            }
        }
        
        cout << cnt << endl;
    }

    return 0;
}