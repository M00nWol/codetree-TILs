#include <iostream>
using namespace std;

int main() {
    string a;
    int cnt = 0;

    cin >> a;

    for(int i=0; i<=a.length()-4; i++){
        for(int j=i+2; j<=a.length()-2; j++){
            if(a[i]=='('&&a[i+1]=='('&&a[j]==')'&&a[j+1]==')'){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}