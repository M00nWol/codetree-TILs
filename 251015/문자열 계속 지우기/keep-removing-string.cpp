#include <iostream>

using namespace std;

string a, b;

int main() {
    cin >> a;
    cin >> b;

    int i;

    while(a.find(b)!=string::npos){
        i = a.find(b);
        a.erase(i,b.length());
    }

    cout << a;

    return 0;
}
