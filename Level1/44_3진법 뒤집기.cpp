#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> arr;
    while (n != 0) arr.emplace_back(n % 3), n /= 3;
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i)
        answer += pow(3, i) * arr[i];
    
    return answer;
}
