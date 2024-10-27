#include<iostream>
#include<array>
using namespace std;

// N개의 원소로 이루어진 배열을 인자로 받아 각각 절댓값 씌워주는 함수 작성

int N;

void count(int *x) {
    for (int k = 0; k < N; k++) {
    if (*x < 0) {
        cout << -(*x) << " ";
        x++;
    }
    else {
        cout << *x << " ";
        x++;
    }
  }
}


int main() {
    cin >> N;
    int arr1[N+1];
    for(int i = 0; i < N; i++) {
        cin >> arr1[i];
    }
    count(arr1);
}