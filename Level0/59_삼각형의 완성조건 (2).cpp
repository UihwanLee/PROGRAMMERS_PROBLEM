#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    // a, b, k => b < a+k -> b-a<k<=b, k < a+b -> b<k<a+b
    for(int i=sides[1]-sides[0]+1; i<=sides[1]; i++) answer++;
    for(int j=sides[1]+1; j<sides[0]+sides[1]; j++) answer++;
    return answer;
}
