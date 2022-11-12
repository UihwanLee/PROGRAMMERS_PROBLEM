#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N;

bool comp(int a, int b)
{
    if(abs(a-N)==abs(b-N)) return a < b;
    return abs(a-N) < abs(b-N);
}

int solution(vector<int> array, int n) {
    int answer = 0;
    N=n;
    sort(array.begin(), array.end(), comp);
    answer = array[0];
    return answer;
}
