#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    map<string, string> m; int idx;
    vector<string> array = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for(int i=0; i<=9; i++) m.insert(pair<string, string>(array[i], to_string(i)));
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        while(1)
        {
            string key = iter->first;
            idx = numbers.find(key);
            if(idx == string::npos) break;
            numbers.replace(idx, key.length(), iter->second);
        }
    }
    
    answer = stoll(numbers);
    return answer;
}
