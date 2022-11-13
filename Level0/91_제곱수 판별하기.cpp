#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    double a = sqrt(n);
    answer = (a-(int)a==0) ? 1 : 2; 
    return answer;
}
