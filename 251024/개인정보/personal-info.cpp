#include <iostream>
#include <algorithm>

using namespace std;


class Human{
    public:
        string name;
        int height;
        double weight;

        Human(){};
        Human(string name, int height, double weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool CmpName(const Human &a, const Human &b){
    return a.name < b.name;
}

bool CmpHeight(const Human &a, const Human &b){
    return a.height > b.height;
}

int main() {
    int n = 5;
    string name;
    int height;
    double weight;
    
    Human humans[n];

    for(int i=0; i<n; i++){
        cin >> name >> height >> weight;
        humans[i] = Human(name, height, weight);
    }

    sort(humans, humans+n, CmpName);

    cout << fixed;
    cout.precision(1);

    cout << "name" << endl;
    for(int i=0; i<n; i++){
        cout << humans[i].name << " " << humans[i].height << " " << humans[i].weight << endl;
    }

    sort(humans, humans+n, CmpHeight);  
    
    cout << endl;
    cout << "height" << endl;
    for(int i=0; i<n; i++){
        cout << humans[i].name << " " << humans[i].height << " " << humans[i].weight << endl;
    }


    return 0;
}