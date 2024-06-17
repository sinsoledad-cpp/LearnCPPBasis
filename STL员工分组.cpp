#define _CRT_SECURE_NO_WARNINGS
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<ctime>
using namespace std;
class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void createWorker(vector<Worker> &v)
{
	string nameSeed = "ABCDEFGHJK";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ô±¹¤";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}
}
void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
	}
}
void showWorkerByGourp(multimap<int, Worker>&m)
{
	cout << "cehua " << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << " name " << pos->second.m_Name << " salary " << pos->second.m_Salary << endl;
	}
	cout << "meishu " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << " name " << pos->second.m_Name << " salary " << pos->second.m_Salary << endl;
	}
	cout << "yanfa " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << " name " << pos->second.m_Name << " salary " << pos->second.m_Salary << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker>vWorker;
	createWorker(vWorker);
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);
	showWorkerByGourp(mWorker);
	system("pause");
	return 0;
}