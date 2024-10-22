#include<iostream>
#include<array>
using namespace std;

// if문 사용해서 a > b, a < b 쪼갠다
// a < b일 때 무조건 false
// b안에 있는게 a 안에 없으면 무조건 false
// 문제점 : 일단 여러 개의 원소를 받지 못함.

bool arrStream(int a, int b) {
    int arr1[a];
    int arr2[b];

    for(int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    for(int j = 0; j < b; j++) {
        cin >> arr2[j];
    }

    if(a < b){
        return false;
    }
    else{
        for(int c = 0; c<b; c++) {
            for(int k= 0; k<a; k++) {
                if(arr2[c] != arr1[k]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int a,b;
    cin >> a >> b;
    int arrA[a];
    int arrB[b];

    if(arrStream(a,b)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}