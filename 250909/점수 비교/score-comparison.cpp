#include <iostream>
using namespace std;

int main() {
    int ma, mb, ea, eb;

    cin >> ma >> ea;
    cin >> mb >> eb;

    if((ma>mb)&&(ea>eb)){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}