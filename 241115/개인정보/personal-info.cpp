#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

class student {
public:
    string name;
    int height;
    double weight;
    student(string n = "", int h = 0, double w = 0.0) {
        this->name= n;
        this->height = h;
        this->weight = w;
    }
};

bool Cmp1(student a, student b) {
    return a.name < b.name;
}

bool Cmp2(student a, student b) {
    return a.height > b.height;
}

bool Cmp3(student a, student b) {
    return a.weight > b.weight;
}

int main() {
    string name;
    int height;
    double weight;
    student s1[5];
    for(int i = 0; i < 5; i++) {
        cin >> name >> height >> weight;
        s1[i] = student(name,height, weight);
    }
    sort(s1,s1+5, Cmp1);
    cout << "name" << endl;
    for(int j = 0; j < 5; j++)
        cout << s1[j].name << " " << s1[j].height << " " << s1[j].weight << endl << fixed << setprecision(1);

    sort(s1,s1+5, Cmp2);
    cout << "\n" << "height" << endl;
    for(int k = 0; k < 5; k++)
        cout << s1[k].name << " " << s1[k].height << " " << s1[k].weight << fixed << setprecision(1) << endl ;
}