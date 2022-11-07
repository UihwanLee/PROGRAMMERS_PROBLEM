#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int T = 1;
    while((slice * T)/n<1) T++;
    answer = T;
    return answer;
}
