#include <iostream>

using namespace std;

int a, b;

bool Prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool Even(string s){
    int sum = 0;
    for(int i=0; i<s.length(); i++){
        sum += s[i]-'0';
    }

    if(sum%2==0){
        return true;
    }
    return false;
}
int Count(int a, int b){
    int cnt = 0;

    for(int i=a; i<=b; i++){
        if(Prime(i) && Even(to_string(i))){
            cnt++;
        }
    }

    return cnt;
}

int main() {
    cin >> a >> b;

    cout << Count(a, b);

    return 0;
}