#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    int x = dot[0], y = dot[1];
    answer = (x>0) ? ((y>0) ? 1 : 4) : ((y>0) ? 2 : 3);
    return answer;
}
