#include<iostream>
#include<algorithm>
using namespace std;

int num;
int arr1[200];
int arr2[200];

bool equal() {
    for(int k = 0; k < num; k++)
        if(arr1[k] != arr2[k]) {
            return false;
        }
    return true;
}

int main() {
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

    if(equal()) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}