#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int day=-1;
    vector<string> days = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> mons = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 1월 1일 = 0, 1월 2일 = 1... 5월 24일 -> 31 + 29 + 31 + 30 + 24 = 145 -> 
    for(int i=0; i<a-1; i++)
    {
        day += mons[i];
    }
    day += b;
    answer = days[day%7];
    return answer;
}
