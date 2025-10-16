#include <iostream>
using namespace std;

int main() {
    int n;
    string a, s[100];
    int cnt = 0;

    cin >> n >> a;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    for(int i=0; i<n; i++){
        if(s[i] == a){
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}