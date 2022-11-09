#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0; 
    // index = 2(k-1) % n
    answer = numbers[(2*k-2)%numbers.size()];
    return answer;
}
