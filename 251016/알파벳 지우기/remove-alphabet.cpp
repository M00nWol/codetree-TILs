#include <iostream>
using namespace std;

int main() {
    string a, b;
    string aa, bb;
    int sum = 0;


    cin >> a >> b;

    for(int i=0; i<a.length(); i++){
        if(a[i]>='0'&& a[i]<='9'){
            aa += a[i];
        }
    }

    for(int i=0; i<b.length(); i++){
        if(b[i]>='0'&&b[i]<='9'){
            bb += b[i];
        }
    }

    sum = stoi(aa) + stoi(bb);

    cout << sum;
    return 0;
}