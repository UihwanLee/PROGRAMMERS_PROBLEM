#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int a=0, b=0;
    
    for(int i=1; i<4; i++)
    {
        int x1 = dots[0][0], y1 = dots[0][1];
        int x2 = dots[i][0], y2 = dots[i][1];
        if(x1==x2) a = (y1>=y2) ? y1-y2 : y2-y1;
        if(y1==y2) b = (x1>=x2) ? x1-x2 : x2-x1;
    }
    
    answer = a*b;
    return answer;
}
