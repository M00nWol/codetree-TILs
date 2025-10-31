#include <iostream>
using namespace std;

int main() {
    int x, y, dir;
    string s;
    int n, t=1;
    int dx[4] = {1,0,-1,0}, dy[4]={0,-1,0,1};    

    x = 0;
    y = 0;
    dir = 3;

    cin >> s;

    for(int i=0; i<s.length(); i++){

        if(s[i]=='L'){
            dir=(dir+3)%4;
            continue;
        } else if(s[i]=='R') {
            dir=(dir+1)%4;
            continue;
        }

        x += dx[dir];
        y += dy[dir];

        if(x==0 && y==0){
            cout << i+1;
            return 0;
        }
    }

    cout << -1;
    return 0;
}