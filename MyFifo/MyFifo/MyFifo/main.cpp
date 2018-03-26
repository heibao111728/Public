#include "MsgRepository\include\MsgRepository.h"
//#include <Winbase.h>
#include <string>
#include <Windows.h>

using namespace std;
int main()
{
#if 0
	CMyFifo fifo;
	fifo.setCapacity(3);

	CMyNode* pNode = NULL;

	/*wstring wstr(L"爱我中华123456");
	wcout.imbue(locale("chs"));
	std::wcout << wstr << endl;*/

	wchar_t pwchBuf[100] = { 0 };
	int i = 1;
#endif

#if 0
	while (1)
	{
		//wmemset(pwchBuf, 0x00, sizeof(pwchBuf));
		wsprintfW(pwchBuf, L"%s%d", L"爱我中华", i++);

		if (fifo.push(pwchBuf))
		{
			cout << "push data success" << endl;
			wcout.imbue(locale("chs"));
			wcout << L"data =" << pwchBuf << endl;
			cout << "Que Size =" << fifo.size() << endl << endl;
		}
		else
		{
			cout << "push data failure" << endl;
			cout << "Que Size =" << fifo.size() << endl;
			cout << "Que capacity =" << fifo.capacity() << endl;
		}
		if (fifo.IsFull())
		{
			while (!fifo.IsEmpty())
			{
				pNode = fifo.pop();
				if (NULL != pNode)
				{
					cout << "pop data success" << endl;
					wcout.imbue(locale("chs"));
					wcout << L"data =" << pNode->getData() << endl;
					cout << "Que Size =" << fifo.size() << endl << endl;
				}
				Sleep(1000);
			}
		}
		Sleep(1000);
	}
#endif

#if 0
	while (1)
	{
		//wmemset(pwchBuf, 0x00, sizeof(pwchBuf));
		wsprintfW(pwchBuf, L"%s%d", L"爱我中华", i++);

		if (fifo.forcePush(pwchBuf))
		{
			cout << "push data success" << endl;
			wcout.imbue(locale("chs"));
			wcout << L"data =" << pwchBuf << endl;
			cout << "Que Size =" << fifo.size() << endl << endl;
		}
		else
		{
			cout << "push data failure" << endl;
			cout << "Que Size =" << fifo.size() << endl;
			cout << "Que capacity =" << fifo.capacity() << endl;
		}
		Sleep(1000);
		if (i > 20)
		{
			Sleep(2000);
			break;
		}
	}
	if (fifo.IsFull())
	{


		/*while (!fifo.IsEmpty())
		{
			pNode = fifo.pop();
			if (NULL != pNode)
			{
				cout << "pop data success" << endl;
				wcout.imbue(locale("chs"));
				wcout << L"data =" << pNode->getData() << endl;
				cout << "Que Size =" << fifo.size() << endl << endl;
			}
			Sleep(1000);
		}*/


		fifo.clean();
		fifo.forcePush(L"nihao中国");
		fifo.forcePush(L"nihao中国");
		fifo.forcePush(L"nihao中国");
		fifo.pop();
		fifo.pop();
		fifo.pop();
		
	}
#endif

#if 0
	CMsgRepository<std::wstring> msgRepository;

	msgRepository.putMsg(L"你好1");
	msgRepository.putMsg(L"你好2");
	msgRepository.putMsg(L"你好3");
	msgRepository.putMsg(L"你好4");

	cout << " start get msg" << endl;
	wcout.imbue(locale("chs"));
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	msgRepository.putMsg(L"你好5");
	msgRepository.putMsg(L"你好6");
	msgRepository.putMsg(L"你好7");
	msgRepository.putMsg(L"你好8");
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;
	wcout << L"data = " << msgRepository.getMsg() << endl;

#endif 

	CMsgRepository<std::string> msgRepository;

	msgRepository.putMsg("hello1");
	msgRepository.putMsg("hello2");
	msgRepository.putMsg("hello3");
	msgRepository.putMsg("hello4");

	cout << " start get msg" << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	msgRepository.putMsg("hello5");
	msgRepository.putMsg("hello6");
	msgRepository.putMsg("hello7");
	msgRepository.putMsg("hello8");
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;
	cout << "data = " << msgRepository.getMsg() << endl;


	getchar();
}