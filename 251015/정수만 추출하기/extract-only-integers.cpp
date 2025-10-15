#include <iostream>
using namespace std;

int main() {
    string a, b;
    int sum = 0;

    cin >> a >> b;

    for(int i=0; i<a.length(); i++){
        if(a[i]<'0' || a[i]>'9'){
            a = a.substr(0, i+1);
            sum += stoi(a);
            break;
        }
    }

    for(int i=0; i<b.length(); i++){
        if(b[i]<'0' || b[i]>'9'){
            b = b.substr(0, i+1);
            sum += stoi(b);
            break;
        }
    }

    cout << sum;
    return 0;
}