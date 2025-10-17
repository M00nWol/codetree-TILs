#include <iostream>

using namespace std;

int a, b;

bool Inside3(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == '3' || s[i]=='6' || s[i] =='9'){
            return true;
        }
    }
    return false;
}

int Check(int a, int b){
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0 || Inside3(to_string(i))){
            cnt++;
        }
    }

    return cnt;
}

int main() {
    cin >> a >> b;

    int cnt = Check(a, b);
    cout << cnt;

    return 0;
}