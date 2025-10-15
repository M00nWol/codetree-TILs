#include <iostream>
using namespace std;

int main() {
    string s;
    string res1 = "No";
    string res2 = "No";

    cin >> s;

    for(int i=0; i<s.length()-1; i++){
        if(s.substr(i,2)=="ee"){
            res1 = "Yes";
        } 
        if(s.substr(i,2)=="ab"){
            res2 = "Yes";
        }
    }

    cout << res1 << " " << res2;
    return 0;
}