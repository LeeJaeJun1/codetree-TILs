#include<iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int time = 0;
    int hour = a;
    int min = b;
    while(true) {
        if(hour == c && min == d) {
            break;
        }
        min++;
        time++;
        if(min == 60) {
            hour++;
            min = 0;
        }
    }
    cout << time;
}