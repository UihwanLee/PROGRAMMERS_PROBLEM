#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end(), greater<>());
    answer = (sides[0]<sides[1]+sides[2]) ? 1 : 2;
    return answer;
}
