#include <iostream>
using namespace std;

int main() {
    int a;
    string s3, s5;
    cin >> a;

    if(a%3==0){
        s3 = "YES";
    } else {
        s3 = "NO";
    }

    if(a%5==0){
        s5 = "YES";
    } else {
        s5 = "NO";
    }

    cout << s3 << endl << s5;
    return 0;
}