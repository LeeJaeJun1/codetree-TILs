#include <iostream>
using namespace std;

bool Year(int y) {
    if (y % 4 == 0 && y % 100 ==0 || y % 400 != 0) {
        return true;
    }
    else {
        return false;
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int y{0};
    cin >> y;
    
    if(Year(y))
        cout << "true";
    else
        cout << "false";
    return 0;
}