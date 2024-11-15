#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class student {
public:
    string name;
    int a;
    int b;
    int c;
    student(string n = "", int a = 0, int b = 0, int c = 0) {
        this->name = n;
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

bool Cmp(student a1, student b1) {
    return a1.a+a1.b+a1.c < b1.a+b1.b+b1.c;
}
int main() {
    int num;
    cin >> num;
    string na;
    int a,b,c;
    student s1[num];
    for(int i = 0; i < num; i++) {
        cin >> na >> a >> b >> c;
        s1[i] = student(na,a,b,c);
    }

    sort(s1, s1+num, Cmp);

    for(int j = 0; j < num; j++) {
        cout << s1[j].name << " " << s1[j].a << " " << s1[j].b << " " << s1[j].c << endl;
    }
}