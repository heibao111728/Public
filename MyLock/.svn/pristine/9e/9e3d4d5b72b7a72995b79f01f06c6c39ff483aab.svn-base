#include "MyLock\MyLockMutex\include\MyLockMutex.h"

CMylockMutex::CMylockMutex()
{
	m_mutex = ::CreateMutex(NULL, FALSE, NULL);
}

CMylockMutex::~CMylockMutex()
{
	::CloseHandle(m_mutex);
}

void CMylockMutex::Lock() const
{
	DWORD d = WaitForSingleObject(m_mutex, INFINITE);
}

void CMylockMutex::Unlock() const
{
	::ReleaseMutex(m_mutex);
}