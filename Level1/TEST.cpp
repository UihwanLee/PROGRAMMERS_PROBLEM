#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;


int main()
{
	string X = "5525", Y = "1255";
    string answer = "";
    vector<int> v1(11, 0), v2(11, 0); 
    
    string max, min;
    if(X.length() >= Y.length()) { max=X, min=Y; }
    else { max=Y, min=X; }
    //string max = X.length() >= Y.length() ? X : Y;
    //string min = X.length() <= Y.length() ? X : Y;
    
    for(int i=0; i<max.length(); i++){
        if(i<min.length()) v1[min[i]-'0']++;
        v2[max[i]-'0']++;
    }
    
    for(int i=0; i<v2.size(); i++){
        std::cout << v1[i];
    }
    std::cout << '\n';
    for(int i=0; i<v1.size(); i++){
        std::cout << v2[i];
    }
    std::cout << '\n';
    
    for(int i=v1.size()-1; i>=0; i--){
        if(v1[i]!=0 && v2[i]!=0) {
        	int len = (v1[i]<=v2[i]) ? v1[i] : v2[i];
            for(int j=0; j<len; j++) 
                answer += to_string(i);
        }
    }
    answer = (answer == "") ? "-1" : (answer[0]-'0'==0) ? "0" : answer;
    cout << answer;
	
	return 0;
}
