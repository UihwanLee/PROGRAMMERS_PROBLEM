#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int T = 1;
    while(T<=100)
    {
    	if((T*6)%n==0) break;
    	T++;
	}
    answer = T;
    return answer;
}
