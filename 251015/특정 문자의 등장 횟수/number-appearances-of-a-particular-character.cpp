#include <iostream>
using namespace std;

int main() {
    string s;
    int cnt1 = 0, cnt2 = 0;

    cin >> s;

    for(int i=0; i<s.length()-1; i++){
        if(s[i]=='e'){
            if(s[i+1]=='e'){
                cnt1++;
            } else if(s[i+1]=='b'){
                cnt2++;
            }
        }
    }

    cout << cnt1 << " " << cnt2; 
    return 0;
}