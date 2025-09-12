#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    int cnt = 1;

    cin >> n;

    for(int i=0; i<n; i++){
        tmp = cnt + (n-1);
        for(int j=0; j<n; j++){
            if(i%2==0){
                cout << cnt << " ";
            } else {
                cout << tmp-j << " ";
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}