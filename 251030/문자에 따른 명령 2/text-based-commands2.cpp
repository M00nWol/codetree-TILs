#include <iostream>
using namespace std;

int main() {
    int x,y;
    string s;
    char c;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int dir = 0;

    x = 0;
    y = 0;

    cin >> s;

    for(int i=0; i<s.length(); i++){
        c = s[i];

        if(c=='L'){
            dir = (dir+3)%4;
        } else if(c=='R'){
            dir = (dir+1)%4;
        } else if(c=='F'){
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y;
    return 0;
}