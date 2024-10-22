#include<iostream>
using namespace std;

int num1, num2;
int A[100], B[100];

bool aStream(int n) { //b 원소가 모두 a원소 안에 들어있는지 확인한다.
    for(int k = 0; k < num2; k++){
        if(A[k+n] != B[k]) {
            return false;
        }
    }
    return true;
}

bool bStream() {
    for(int c = 0; c < num1; c++) {
        if(aStream(c)) {
            return true;
        }
    }
    return false;
}



int main() {
    cin >> num1 >> num2;

    for(int i = 0; i < num1; i++) {
        cin >> A[i];
    }

    for(int j = 0; j < num2; j++) {
        cin >> B[j];
    }

    if(bStream()) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}