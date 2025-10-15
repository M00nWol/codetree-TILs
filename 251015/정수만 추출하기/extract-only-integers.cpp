#include <iostream>
using namespace std;

int main() {
    string a, b;
    int sum = 0;

    cin >> a >> b;

    for(int i=0; i<a.length(); i++){
        if(a[i]<'0' || a[i]>'9'){
            a = a.substr(0, i+1);
            break;
        }
    }

    for(int i=0; i<b.length(); i++){
        if(b[i]<'0' || b[i]>'9'){
            b = b.substr(0, i+1);
            break;
        }
    }

    sum = stoi(a) + stoi(b);
    cout << sum;
    return 0;
}