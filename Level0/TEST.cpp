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
	vector<string> quiz = { "19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2" };
	vector<string> answer;
    int num;
    for(const auto s : quiz)
    {
        stringstream ss(s);
        ss >> num;
        
        cout << num << endl;
        char ch=' '; int tmp=0;
        while(ss)
        {
        	//if(tmp=268501009) continue;
            if(ch=='+') num += tmp;
            if(ch=='-') num -= tmp;
            if(ch=='=') 
            {
                string a = (num==tmp) ? "O" : "X";
                answer.emplace_back(a);
            }
            cout << ch << ' ' << tmp << endl;
            ss >> ch >> tmp;
        }
        
        cout << "NEXT" << endl;
    }

    return 0;
}
