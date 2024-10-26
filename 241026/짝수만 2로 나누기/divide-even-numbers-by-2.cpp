#include <iostream>
#include<array>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int arr1[100];
    for(int i =0; i< N; i++) {
        cin >> arr1[i];
        if(arr1[i] % 2 == 0) {
            cout << arr1[i] / 2 << " ";
        }
        else{
            cout << arr1[i] << " ";
        }
    }
    return 0;
}