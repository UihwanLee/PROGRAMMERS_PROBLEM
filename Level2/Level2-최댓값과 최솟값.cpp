#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> splitnumbers(const string &input)
{
    vector<int> numbers;
    stringstream ss(input);
    string temp;
    int number;
    
    while(ss >> temp)
    {
        number = stoi(temp);
        numbers.push_back(number);
    }
    
    return numbers;
}

string solution(string s) {
    string answer = "";
    vector<int> numbers = splitnumbers(s);
    
    int minVal = *min_element(numbers.begin(), numbers.end());
    int maxVal = *max_element(numbers.begin(), numbers.end());
    
    answer = to_string(minVal) + " " + to_string(maxVal);
    
    return answer;
}
