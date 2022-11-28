#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double SUM = 0;
    for(auto n : arr) SUM += n;
    answer = SUM/arr.size();
    return answer;
}
