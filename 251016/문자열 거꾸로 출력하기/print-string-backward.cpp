#include <iostream>
using namespace std;

int main() {
    string s;

    for(int i=0; i<10; i++){
        cin >> s;
        if(s=="END"){
            return 0;
        }
        for(int j=s.length()-1; j>=0; j--){
            cout << s[j];
        }
        cout << endl;
    }

    
    return 0;
}