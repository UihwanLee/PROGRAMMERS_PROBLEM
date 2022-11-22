#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
	long long n = 12345;
	vector<int> answer;
    string s = to_string(n);
    for(int i=s.size()-1; i>=0; i--)
    {
        answer.emplace_back(s[i]-'0');
        cout << s[i]-'0' << '\n';
    }
    
    return 0;
} 
