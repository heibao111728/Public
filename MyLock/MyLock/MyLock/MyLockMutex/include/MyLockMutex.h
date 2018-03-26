#pragma once
#ifndef __MYLOCKMUTEX_H__
#define __MYLOCKMUTEX_H__

#include <Windows.h>
#include "MyLock\IMyLock\include\IMyLock.h"

class CMylockMutex : public CIMyLock
{
public:
	CMylockMutex();
	~CMylockMutex();

	virtual void Lock() const;
	virtual void Unlock() const;

private:
	HANDLE m_mutex;
};

#endif // !__MYLOCKMUTEX_H__

