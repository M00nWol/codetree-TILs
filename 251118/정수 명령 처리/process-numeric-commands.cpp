#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    string command;
    int a, n;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> command;

        if(command == "push"){
            cin >> a;
            st.push(a);
        } else if(command == "size"){
            cout << st.size() << endl;
        }else if(command == "pop"){
            cout << st.top() << endl;
            st.pop();
        } else if(command == "empty"){
            cout << ((st.empty()?1:0)) << endl;
        } else if(command == "top"){
            cout << st.top() << endl;
        }
    }
    return 0;
}