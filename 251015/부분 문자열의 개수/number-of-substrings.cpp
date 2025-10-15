#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string a, b;

    cin >> a >> b;

    for(int i=0; i<a.length()-b.length()+1; i++){
        if(a.substr(i, b.length())==b){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}