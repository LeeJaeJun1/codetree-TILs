#include<iostream>
using namespace std;

bool width[2000][2000] = {0};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x1,x2,y1,y2;
    int total = 0;
    for(int i = 0; i < 2; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=1000; y1+=1000; x2+=1000; y2+=1000;
        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                if(width[j][k]) {
                    total--;
                }
                width[j][k] = 1;
                total++;
            }
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    x1+=1000; y1+=1000; x2+=1000; y2+=1000;
    for(int a = x1; a < x2; a++) {
        for(int b = y1; b < y2; b++) {
            if(width[a][b]) {
                total--;
            }
        }
    }
    cout << total;
}