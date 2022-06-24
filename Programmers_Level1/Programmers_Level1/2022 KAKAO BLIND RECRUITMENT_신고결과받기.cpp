#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map> 

using namespace std;

vector<string> Split(const string& text)
{
	vector<string> result;
	string stringBuffer;
	istringstream ss(text);

	while (getline(ss, stringBuffer, ' '))
	{
		result.emplace_back(stringBuffer);
	}

	return result;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer;

	// 신고한 사람 - 신고 당한 사람 
	map<string, vector<string>> list;

	// 신고 받은 사람 리스트 정리 
	for (const auto& report_item : report)
	{
		auto v = Split(report_item);
		auto& first_person = v[0];  // 신고한 사람
		auto& second_person = v[1];  // 신고 당한 사람

		if (list[first_person].empty() || (find(list[first_person].begin(), list[first_person].end(), second_person) == list[second_person].end()))
		{

		}
	}

	// 결과 리스트 정리 

	answer.push_back(1);

	return answer;
}

int main(void)
{
	// TEST
	// ["muzi", "frodo", "apeach", "neo"], ["muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"], 2
	vector<int> answer = solution({ "muzi", "frodo", "apeach", "neo" }, { "muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi" }, 2);
	for (int i = 0; i < answer.size(); ++i) cout << answer[i] << ' ';
	return 0;
}