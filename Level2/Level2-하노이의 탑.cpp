#include <string>
#include <vector>

using namespace std;

vector<int> temp;
vector<vector<int>> answer;

void hanoi(int n, int from, int to, int other)
{
    if(n==0) return;
    hanoi(n-1, from, other, to);
    temp.clear();
    temp.emplace_back(from);
    temp.emplace_back(to);
    answer.emplace_back(temp);
    hanoi(n-1, other, to, from);
}

vector<vector<int>> solution(int n) {
    hanoi(n, 1, 3, 2);
    
    return answer;
}
