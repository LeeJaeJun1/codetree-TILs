#include <iostream>
#include <string>

#define MAX_N 2000
#define OFFSET 1000
using namespace std;

int checked[MAX_N] = {0}; // 지나간 영역을 확인하기 위한 배열

int point = OFFSET; // 현재 지점을 저장하는 변수
int max_point = point; // 최대 지점을 저장하는 변수
int min_point = point; // 최저 지점을 저장하는 변수

// 입력받은 수와 방향을 바탕으로 checked 배열에 1씩 증가하는 함수
void Moving(int a, string str) {
    int next_point = point; // 다음 지점을 저장하는 변수

    if (str == "R") {
        next_point += a;
        // 현재 위치에서 next_point까지 지나간 경로를 기록
        for (int i = point + 1; i <= next_point; i++) {
            checked[i] += 1;
        }
    } else { // "L"
        next_point -= a;
        // 현재 위치에서 next_point까지 지나간 경로를 기록
        for (int j = point - 1; j >= next_point; j--) {
            checked[j] += 1;
        }
    }

    point = next_point;

    if (point > max_point) {
        max_point = point;
    }

    if (point < min_point) {
        min_point = point;
    }
}

int main() {
    int n, x; // 명령받을 횟수 & 이동할 크기를 입력받는 변수
    string s; // 이동할 방향을 입력받는 변수

    int result = 0; // 2번 이상 지나간 영역의 크기를 저장하는 변수

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> s;
        Moving(x, s);
    }

    // 지나간 경로를 확인하고 2번 이상 지나간 영역을 셈
    for (int j = min_point; j <= max_point; j++) {
        if (checked[j] >= 2) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}