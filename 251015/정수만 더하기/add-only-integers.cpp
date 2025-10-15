#include <iostream>
using namespace std;

int main() {
    string a;
    int sum = 0;

    cin >> a;

    for(int i=0; i<a.length(); i++){
        if(a[i]>='0'&&a[i]<='9'){
            sum += a[i]-'0';
        }
    }

    cout << sum;
    return 0;
}