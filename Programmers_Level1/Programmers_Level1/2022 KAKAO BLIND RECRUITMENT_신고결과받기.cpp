#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map> 
#include <typeinfo>

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

	// �Ű��� ��� - �Ű� ���� ��� 
	map<string, vector<string>> list;
	map<string, vector<string>> list2;

	// �Ű� ���� ��� ����Ʈ ���� 
	for (const auto& report_item : report)
	{
		auto v = Split(report_item);
		auto& first_person = v[0];  // �Ű��� ���
		auto& second_person = v[1];  // �Ű� ���� ���

		if (list2[second_person].empty() || (find(list2[second_person].begin(), list2[second_person].end(), first_person) == list2[second_person].end()))
		{
			list2[second_person].emplace_back(first_person);
		}
		if (list[first_person].empty() || (find(list[first_person].begin(), list[first_person].end(), second_person) == list[first_person].end()))
		{
			list[first_person].emplace_back(second_person);
		}
	}

	// ��� ����Ʈ ���� 
	vector<int> answer;
	
	for(const auto& id_item : id_list)
	{
		auto count = 0;
		auto& who_list = list[id_item];
		for(const auto& who : who_list)
		{
			if(list2[who].size() >= k)
			{
				++count;
			}
		}
		answer.emplace_back(count);
	}

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
