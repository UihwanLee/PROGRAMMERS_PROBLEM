#include <string>
#include <vector>
#include <cmath>

using namespace std;

int GetDist(int a, int b){
    if(a==0) a = 11;
    if(b==0) b = 11;
    if(a>11){
        int tmp = (a==35) ? 2 : 0;
        return abs((b-1)/3-3) + abs((b-1)%3-tmp);
    } 
    else return abs((b-1)/3-(a-1)/3) + abs((b-1)%3-(a-1)%3);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int current_R=35, current_L=42;
    for(const auto n : numbers){
        if(n==1 || n==4 || n==7) { current_L = n; answer += "L"; }
        else if(n==3 || n==6 || n==9){ current_R = n; answer += "R"; }
        else{
            int L = GetDist(current_L, n), R = GetDist(current_R, n);
            if(L<R) { current_L = n; answer += "L"; } 
            else if(L>R){ current_R = n; answer += "R";}
            else {
                if(hand=="left") { current_L = n; answer += "L"; } 
                else { current_R = n; answer += "R"; }
            }
        }
    }
    
    return answer;
}
