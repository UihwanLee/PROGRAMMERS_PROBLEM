#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPow(long long n)
{
    return (sqrt(n)-(long long)(sqrt(n))==0);
}

long long solution(long long n) {
    long long answer = 0;
    answer = (isPow(n)) ? pow(sqrt(n)+1,2) : -1;
    return answer;
}
