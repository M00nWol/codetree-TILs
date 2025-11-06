#include <iostream>
#include <climits>


using namespace std;

int ten(string s){
    int res = 0;
    for(int i=0; i<s.length(); i++){
        res = 2*res + (s[i]-'0');
    }

    return res;
}


int main() {
    int n;
    string a, tmp;
    int res = INT_MIN;

    cin >> a;

    for(int i=0; i<a.length(); i++){
        tmp = a;
        tmp[i] = (a[i]=='0')?'1':'0';

        res = max(res, ten(tmp));
    }

    cout << res;
    return 0;
}