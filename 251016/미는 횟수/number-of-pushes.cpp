#include <iostream>
using namespace std;

int main() {
    string a, b, tmp;
    int n = -1;
    int alen;

    cin >> a >> b;

    alen = a.length();

    for(int i=0; i<alen; i++){
        tmp = a.substr(alen-i, i) + a.substr(0, alen-i);
        if(tmp == b){
            n = i;
            break;
        }
    }

    cout << n;
    return 0;
}