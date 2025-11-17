#include <iostream>
#include <list>

using namespace std;

int main() {
    int n;
    string command;
    int c;
    list<int> l;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> command;

        if(command == "push_back"){
            cin >> c;
            l.push_back(c);
        } else if(command == "push_front"){
            cin >> c;
            l.push_front(c);
        } else if(command == "pop_front"){
            cout << l.front() << endl;
            l.pop_front();
        } else if(command == "pop_back"){
            cout << l.back() << endl;
            l.pop_back();
        } else if(command == "size"){
            cout << l.size() << endl;
        } else if(command == "empty"){
            cout << (l.empty()?1:0) << endl;
        } else if(command == "front"){
            cout << l.front() << endl;
        } else if(command == "back"){
            cout << l.back() << endl;
        }
    }
    return 0;
}