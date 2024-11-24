#include<iostream>
#include<algorithm>
using namespace std;

class student{
public:
    int height;
    int weight;
    int number;
    student(int h = 0, int w = 0, int n = 0) {
        this->height = h;
        this->weight = w;
        this->number = n;
    }
};

bool cmp(student s1, student s2) {
    if(s1.height == s2.height)
        return s1.weight > s2.weight;
    return s1.height < s2.height;
}

int main() {
    int h,w;
    int num;
    cin >> num;
    student s1[num];
    for(int i = 0; i < num; i++) {
        cin >> h >> w;
        s1[i] = student(h,w,i+1);
    }

    sort(s1, s1+num,cmp);

    for(int j = 0; j < num; j++)
        cout << s1[j].height << " " << s1[j].weight << " " << s1[j].number << endl;
}