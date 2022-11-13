#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    answer = -1;
    string num_string = to_string(num);
    for(int i=0; i<num_string.length(); i++)
    {
        char c = k + '0';
        if(num_string[i]==c) 
        {
            answer = i+1;
            break;
        }
    }
    return answer;
}
