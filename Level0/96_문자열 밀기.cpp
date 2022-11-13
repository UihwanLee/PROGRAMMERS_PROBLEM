#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    answer = -1;
    for(int i=1; i<=A.length(); i++)
    {
        if(A==B) 
		{
			answer = i-1;
		}
        rotate(A.rbegin(), A.rbegin()+1, A.rend());
    }
    
    return answer;
}
