#include <iostream>
using namespace std;

void Square(int n) {
    int con = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << con << " ";
            con++;
            if(con == 10)
                con = 1;
        }
        cout << endl;
    }
}

int main() {
    int count{0};
    cin >> count;
    Square(count);
    return 0;
}