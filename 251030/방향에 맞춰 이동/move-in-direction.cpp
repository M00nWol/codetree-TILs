#include <iostream>
using namespace std;

int main() {
    int x=0, y=0;
    int dx[4]={-1,0,0,1}, dy[4]={0,-1,1,0};
    char c;
    int idx, n, d;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c >> d;

        if(c=='W') {
            idx = 0;
        } else if(c=='S'){
            idx = 1;
        } else if(c=='N'){
            idx = 2;
        } else if(c=='E'){
            idx = 3;
        }

        x = x+(d*dx[idx]);
        y = y+(d*dy[idx]);
    }

    cout << x << " " << y;
    return 0;
}