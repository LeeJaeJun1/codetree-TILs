#include<iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int month = a;
    int total = 0;
    int day = b;
    int num_of_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(true) {
        if(month==c && day == d) {
            break;
        }
        total++;
        day++;
        if(day > num_of_days[month]) {
            month++;
            day = 0;
        }
    }
    cout << total;
}