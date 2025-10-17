#include <iostream>

using namespace std;

int a;
int c;
char o;

string Cal(int a, char o, int c){
    switch(o){
        case '+': return to_string(a+c);
        case '-': return to_string(a-c);
        case '/': return to_string(a/c);
        case '*': return to_string(a*c);
        default: return "False";
    }
}

int main() {
    cin >> a >> o >> c;
    
    string s;

    s = Cal(a, o, c);

    if(s=="False"){
        cout << s;
    } else {
        cout << a << " " << o << " " << c << " = " << s;
    }

    return 0;
}