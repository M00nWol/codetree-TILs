#include <iostream>
using namespace std;

int main() {
    string s;


    cin >> s;
    if(s.find("e")!=string::npos){
        s.erase(s.find("e"),1);
    }

    cout << s;
    return 0;
}