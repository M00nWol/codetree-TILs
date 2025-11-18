#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    string s;

    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            st.push('(');
        } else {
            if(st.empty()==true || st.top() != '('){
                cout << "No";
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty()){
        cout << "Yes";
        return 0;
    }

    cout << "No";
    return 0;
}