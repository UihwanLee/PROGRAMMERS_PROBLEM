#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    // n = M-1 + (N-1)M
    answer = M-1 + (N-1)*M;
    return answer;
}
