#include <iostream>
using namespace std;

int main() {
    int s, a;
    string result;
    cin >> s >> a;

    if(s==0){
        if(a>=19) result = "MAN";
        else result = "BOY";
    }
    else{
        if(a>=19) result = "WOMAN";
        else result = "GIRL";
    }

    cout << result;
    return 0;
}