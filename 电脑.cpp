#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class CPU
{
public:
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *men)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_men = men;
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_men->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_men != NULL)
		{
			delete m_men;
			m_men = NULL;
		}
	}
private:
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_men;
};
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "IntelCPU calculate" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "IntelVideoCard display" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "IntelMemory storage" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCPU calculate" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "LenovoVideoCard display" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMemory storage" << endl;
	}
};
void test01()
{
	CPU *intelCpu = new IntelCPU();
	VideoCard *intelCard = new IntelVideoCard();
	Memory *intelMem = new IntelMemory();
	Computer *computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
	cout << endl;
	Computer *computer2 = new Computer(new LenovoCPU(), new LenovoVideoCard(), new LenovoMemory());
	computer2->work();
	delete computer2;
}
int main()
{
	test01();

	system("pause");
	return 0;
}