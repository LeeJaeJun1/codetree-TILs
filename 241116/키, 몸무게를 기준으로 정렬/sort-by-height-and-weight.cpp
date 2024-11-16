#include<iostream>
#include<algorithm>
using namespace std;

class student{
public:
    string name;
    int height;
    int weight;
    student(string s = "", int h = 0, int w = 0) {
        this->name = s;
        this->height = h;
        this->weight = w;
    }
};

bool Cmp(student a, student b){
    if(a.height == b.height)
        return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    student s1[n];
    string s;
    int h,w;
    for(int i = 0; i < n; i++) {
        cin >> s >> h >> w;
        s1[i] = student(s,h,w);
    }
    sort(s1,s1+n,Cmp);

    for(int j = 0; j < n; j++)
        cout << s1[j].name << " " << s1[j].height << " " << s1[j].weight << endl;
}