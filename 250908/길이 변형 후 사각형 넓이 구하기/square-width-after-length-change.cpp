#include <iostream>
using namespace std;

int main() {
    
    int w, h;

    cin >> w >> h;

    w += 8;
    h *= 3;

    cout << w << h << w*h;

    return 0;
}