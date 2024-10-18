#include <iostream>
using namespace std;

bool checkPrime(int n, int m) { // false일 경우 소수이다.
    bool arr[1000] = {false, };
    arr[0] = arr[1] = true;
    int count{0};

    for(int i = 2; i * i <= m; i++) {
        if(arr[i]) continue; // true일 경우 소수 아니끼 때문에, continue

        else{
            for(int j = 2; j*i <= m; j++){
                arr[j*i] = true;
            }
        }
    }
    return true;
}

int main() {
    int a,b;
    cin >> a >> b;
    
    int count{0};
        if(!checkPrime(a,b)) {
            count += ????;
        }
    cout << count;
    return 0;
}