#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>

using namespace std;

bool isPow(long long n)
{
    return (sqrt(n)-(long long)(sqrt(n))==0);
}

int main()
{
	long long n = 121;
	long long answer = 0;
    answer = (isPow(n)) ? pow(sqrt(n)+1,2) : -1;
    cout << isPow(n);
    
    return 0;
} 
