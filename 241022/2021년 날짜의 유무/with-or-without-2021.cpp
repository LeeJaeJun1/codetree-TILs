#include<iostream>
using namespace std;

// 1,3,5,7,9,11 - 31일까지
// 2(예외, 28),4,6,8(예외, 31),10,12 - 30일까지

int Exist(int m) {
    if(m==2)
        return 28;
    if(m==4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    else{return 31;}

}

bool Day(int m, int d) {
    if(m<=12 && d <= Exist(m)) {return true;}
    else{return false;}
}

int main() {
    int M,D;
    cin >> M >> D;
    if(Day(M,D)) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}