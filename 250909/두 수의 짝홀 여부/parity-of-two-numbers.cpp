#include <iostream>
using namespace std;

int main() {
    int a, b;
    string sa, sb;

    cin >> a >> b;

    if(a%2!=0){
        sa = "odd";
    } else{
        sa = "even";
    }

    if(b%2!=0){
        sb = "odd";
    } else {
        sb = "even";
    }

    cout << sa << endl << sb;
    


    return 0;
}