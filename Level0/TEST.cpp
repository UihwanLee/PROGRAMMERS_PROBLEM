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
	string A = "hello", B = "ohell"; 
	int answer = 0;
    answer = -1;
    for(int i=1; i<=A.length(); i++)
    {
        if(A==B) 
		{
			answer = i-1;
		}
		cout << A << ' '<< i-1 << endl;
        rotate(A.rbegin(), A.rbegin()+1, A.rend());
    }
    
    cout << answer;

    return 0;
}
