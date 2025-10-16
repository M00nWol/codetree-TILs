#include <iostream>
using namespace std;

int main() {
    int n, a;
    int sum = 0;
    string s;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        sum += a;
    }    

    s = to_string(sum);

    s = s.substr(1, s.length()-1)+s.substr(0,1);

    cout << s;
    return 0;
}