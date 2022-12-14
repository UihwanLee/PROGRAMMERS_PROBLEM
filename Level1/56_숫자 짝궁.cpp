#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> v1(11, 0), v2(11, 0); 
    
    string max, min;
    if(X.length() >= Y.length()) { max=X, min=Y; }
    else { max=Y, min=X; }
    
    for(int i=0; i<max.length(); i++){
        if(i<min.length()) v1[min[i]-'0']++;
        v2[max[i]-'0']++;
    }
    
    for(int i=v1.size()-1; i>=0; i--){
        if(v1[i]!=0 && v2[i]!=0) {
        	int len = (v1[i]<=v2[i]) ? v1[i] : v2[i];
            for(int j=0; j<len; j++) 
                answer += to_string(i);
        }
    }
    answer = (answer == "") ? "-1" : (answer[0]-'0'==0) ? "0" : answer;
    
    return answer;
}
