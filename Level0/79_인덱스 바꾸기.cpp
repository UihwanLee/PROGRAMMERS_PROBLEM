#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    char c1 = my_string[num1], c2 = my_string[num2];
    for(int i=0; i<my_string.length(); i++)
    {
        char c = (i!=num1 && i!=num2) ? my_string[i] : (i==num2) ? c1 : c2;
        answer += c;
    }
    return answer;
}
