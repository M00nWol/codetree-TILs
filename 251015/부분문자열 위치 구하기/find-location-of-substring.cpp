#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    int res = -1;

    for(int i=0; i<input_str.length()-target_str.length()+1; i++){
        if(input_str.substr(i, target_str.length())==target_str){
            res = i;
            break;
        }
    }

    cout << res;

    return 0;
}
