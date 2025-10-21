#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int check(){
    for(int i=0; i<text.length()-pattern.length()+1; i++){
        if(text.substr(i, pattern.length()) == pattern){
            return i;
        }
    }

    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << check();

    return 0;
}