#include <iostream>
using namespace std;

// w = 2, h = 3

void rectangle(int w, int h) {
    for(int i = 0; i < w; i++) {
        for(int j = 0; j < h; j++) {
            cout << "1";
        }
    cout << "\n";    
    }
}

int main() {
    int wid{0};
    int hei{0};
    cin >> wid >> hei;
    rectangle(wid, hei);
    return 0;
}