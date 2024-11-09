#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr1[100];
    int arr2[100];
    int num;
    int result;
    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> arr1[i];
    }
    sort(arr1, arr1+num);

    for(int j = 0; j < num; j++) {
        cin >> arr2[j];
    }
    sort(arr2, arr2+num);

    for(int k = 0; k < num; k++) {
        if(arr1[k] != arr2[k]) {
            result = 0;
        }
        else{
            result = 1;
        }
    }

    if(result == 1) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}