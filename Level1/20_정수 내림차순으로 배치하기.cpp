#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    stable_sort(s.begin(), s.end(), greater<>());
    answer = stoll(s);
    return answer;
}
