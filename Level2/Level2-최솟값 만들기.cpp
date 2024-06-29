#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool asc (int a, int b) {
    return a < b;
}

bool desc (int a, int b) {
    return a > b;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end(), asc);
    sort(B.begin(), B.end(), desc);
    for (int i = 0; i < A.size(); i ++) {
        answer += A[i] * B[i];
    }

    return answer;
}
