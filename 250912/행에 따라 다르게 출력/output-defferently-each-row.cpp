#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 1;

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << cnt << " ";
            if(i%2==0){
                if(j==n-1) cnt += 2;
                else cnt++;
            } else {
                if(j==n-1) cnt++;
                else cnt +=2;
            }
        }
        cout << endl;
    }
    return 0;
}