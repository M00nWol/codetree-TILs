#include <iostream>
#include <queue>

using namespace std;

int main() {

    int n;
    string command;
    int c;
    queue<int> q;

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> command;

        if(command == "push"){
            cin >> c;
            q.push(c);
        } else if(command == "pop"){
            cout << q.front() << endl;
            q.pop();
        } else if(command == "size"){
            cout << q.size() << endl;
        } else if(command == "empty"){
            cout << (q.empty()?1:0) << endl;
        } else if(command == "front"){
            cout << q.front() << endl;
        }
    }
    
    return 0;
}