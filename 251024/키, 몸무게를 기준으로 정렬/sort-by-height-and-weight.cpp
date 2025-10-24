#include <iostream>
#include <algorithm>

using namespace std;

class Human{
    public:
        string name;
        int height;
        int weight;

        Human(){};
        Human(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool Cmp(const Human &a, const Human &b){
    if(a.height != b.height){
        return a.height < b.height;
    }

    return a.weight > b.weight;
}

int main() {
    int n;
    string name;
    int height, weight;

    cin >> n;

    Human human[n];

    for(int i=0; i<n; i++){
        cin >> name >> height >> weight;
        human[i] = Human(name, height, weight);
    }

    sort(human, human+n, Cmp);

    for(int i=0; i<n; i++){
        cout << human[i].name << " " << human[i].height << " " << human[i].weight << endl;
    }

    return 0;
}