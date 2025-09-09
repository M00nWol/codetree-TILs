#include <iostream>
using namespace std;

int main() {
    int ma, mb, ea, eb;
    char win;

    cin >> ma >> ea;
    cin >> mb >> eb;

    if(ma > mb){
        win = 'A';
    } else if(mb>ma){
        win = 'B';
    } else {
       if(ea>eb) {
        win = 'A';
       } else {
        win = 'B';
       }
    }

    cout << win;
    return 0;
}