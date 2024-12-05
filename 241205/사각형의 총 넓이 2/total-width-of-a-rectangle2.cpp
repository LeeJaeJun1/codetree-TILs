#include<iostream>
using namespace std;

bool width[100][100] = {0};

int main() {
    int x1,x2,y1,y2,n;
    int total = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1 +=100; y1+=100; x2+=100; y2+=100;
        for(int j = x1; j < x2;  j++) {
            for(int k = y1; k <y2; k++) {
                if(width[j][k]) {
                    continue;
                }
                width[j][k] = 1;
                total++;
            }
        }
    }
    cout << total;
}