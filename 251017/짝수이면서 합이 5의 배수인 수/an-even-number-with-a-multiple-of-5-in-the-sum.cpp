#include <iostream>

using namespace std;

int n;

bool Check(int n){
    string si = to_string(n);
    int sum = 0;

    for(int i=0; i<2; i++){
        sum += si[i]-'0';
    }

    if((si[1]%2==0) && (sum%5==0)){
        return true;
    }
    return false;
}

int main() {
    cin >> n;
    string s;

    s = Check(n)? "Yes" : "No";

    cout << s;

    return 0;
}