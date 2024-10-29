#include<iostream>
using namespace std;

int n,m;
int arr1[100];
int total;

void function(int M) {
    while (M) {
        total += arr1[M];

        if( M % 2 == 0 ) {
            M /= 2;
        }
        else{
            M-=1;
        }
    }
    cout << total;
}

int main() {
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        cin >> arr1[i];
    }

    function(m);
}