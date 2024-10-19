#include <iostream>
using namespace std;

bool Year(int y) {
    if (y % 4 != 0)
        return false; // 4의 배수가 아니라면 무조건 윤년이 아니다.
    
    if (y % 100 != 0)
        return true; // 4의 배수이면서 100의 배수가 아니라면 무조건 윤년

    if (y % 400 == 0) // 100의 배수이면서 400의 배수이면 무조건 윤년
        return true;

    return false; // 100의 배수이지만 400의 배수가 아니면 무조건 윤년이 아니다.
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