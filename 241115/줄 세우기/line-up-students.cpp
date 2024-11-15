#include<iostream>
#include<algorithm>
using namespace std;

class student {
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

bool Cmp(student a, student b) {
    if(a.height != b.height)
        return a.height > b.height;
    if(a.weight != b.weight)
        return a.weight > b.height;
    return a.number < b.number;
}

int main() {
   int num;
   cin >> num;
   student s1[num];
   int he, we;
   for(int i = 0; i <num; i++) {
       cin >> he >> we;
       s1[i] = student(he,we,i+1);
   }
   sort(s1, s1+num, Cmp);

   for(int j = 0; j < num; j++)
       cout << s1[j].height << " " << s1[j].weight << " " << s1[j].number << endl;
   
   return 0;
}