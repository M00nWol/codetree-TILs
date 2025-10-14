#include <iostream>
using namespace std;

int main() {
    int n;
    string arr[10];
    string s;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        s += arr[i];
    }

    int cnt = 0;
    for(int i=0; i<s.length(); i++){
        cout << s[i];
        cnt++;
        if(cnt>=5){
            cout << endl;
            cnt = 0;
        }
    }

    return 0;
}