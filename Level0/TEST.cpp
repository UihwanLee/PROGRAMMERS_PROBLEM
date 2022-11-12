#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main()
{
	long long answer = 0;
	string numbers = "onetwothreefourfivesixseveneightnine";
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
    
    int p = numbers.length()-1;
	for(int i=0; i<numbers.length(); i++)
    {
    	long long a = numbers[i]-48, b = pow(10, p);
    	cout << a << endl;
        answer += a * b;
        cout << answer << " += " << a << "*" << b << endl;
        p--;
    }

    return 0;
}
