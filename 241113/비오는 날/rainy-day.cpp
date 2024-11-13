#include<iostream>
using namespace std;

class Future {
public:
    string date;
    string day;
    string weather;

    Future(string dat, string da, string wea) {
        this->date = dat;
        this->day = da;
        this->weather = wea;
    }
    Future(){}
};

int main() {
    int n;
    int count = 0;
    string data, day, weather;
    cin >> n;
    Future f1[n];

    Future f2 = Future("9999-99-99", "","");

    for(int i = 0; i < n; i++) {
        cin >> data >> day >> weather;
        f1[i] = Future(data,day,weather);
    }

    for(int j = 0; j < n; j++) {
        if(f1[j].weather == "Rain") {
            if(f2.date >= f1[j].date) {
                f2 = f1[j];
            }
        }

    }
    cout << f2.date << " "<< f2.day << " " << f2.weather;
}