#include <iostream>
using namespace std;

// 연도, 월, 일 Y,M,D 존재하면 무슨 계절, 존재하지 않으면 -1
// 3 ~ 5 봄, 6 ~ 8 여름, 9 ~ 11 가을, 12 ~ 2 겨울
// 윤년일 경우 2월 29일까지

bool Year(int y) {
    if( y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        return 1;
    }
    return 0;
}

bool Right(int y, int m, int d) {

    if((m == 1 || m == 3 || m==5 || m== 7 || m== 8 || m == 10 || m == 12) && d < 32) {
        return true;
    }
    else if((m == 4 || m == 6 || m == 9 || m == 11) && d < 31) {
        return true;
    }
    else if((m == 2) && d >= 1 && d <= 28) {
        return true;
    }
    else if((m==2) && d > 29) {
        return false;
    }
    else if((m==2) && d == 29 && Year(y)) {
        return true;
    }
    else if((m==2) && d == 29 && Year(y) != 1) {
        return false;
    }
    else{
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y;
    int M;
    int D;
    cin >> Y >> M >> D;

    if(M > 12 || M < 1) {
        cout << "-1";
    }

    if(Right(Y ,M ,D) != 1) {
        cout << "-1";
    }
    if(Right(Y,M,D)) {
        if (M >= 3 && M <= 5) {
            cout << "Spring";
        } else if (M >= 6 && M <= 8) {
            cout << "Summer";
        } else if (M >= 9 && M <= 11) {
            cout << "Fall";
        } else {
            cout << "Winter";
        }
    }
    return 0;
}