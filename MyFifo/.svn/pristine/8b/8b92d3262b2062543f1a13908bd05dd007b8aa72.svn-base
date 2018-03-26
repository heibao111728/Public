/**
*
*	description:	use fifo data struct to storage msg, if the counter of msg larger than
*					the capacity of fifo, delete msg on front of fifo then insert the new 
*					msg.  
*
*	date:			20170517
*	author:			dyang
*	modified:		20170529,dyang.		use c++ template class to add usability
*
*/

#pragma once

#ifndef __MSGREPOSITORY_H__
#define __MSGREPOSITORY_H__

#include "MyFifo.h"

template <class T>
class CMsgRepository
{
public:
	CMsgRepository(int capacity = 100);
	~CMsgRepository();

	bool putMsg(T data);
	T getMsg();

	void clean();
	bool setCapacity(int capacity);

	int getMsgCount();
	int getCapacity();

private:
	CMyFifo<T>* m_pfifo;
};


template <class T>
CMsgRepository<T>::CMsgRepository(int capacity)
{
	m_pfifo = new CMyFifo<T>(capacity);
}


template <class T>
CMsgRepository<T>::~CMsgRepository()
{
}


template <class T>
bool CMsgRepository<T>::putMsg(T data)
{
	if (NULL != m_pfifo)
	{
		return m_pfifo->forcePush(data);
	}
	else
	{
		return false;
	}
}


template <class T>
T CMsgRepository<T>::getMsg()
{
	if (NULL != m_pfifo)
	{
		CMyNode<T>* pNode = m_pfifo->pop();
		if (NULL != pNode)
		{
			return pNode->getData();
		}
		else
		{
			return T();
		}
	}
	else
	{
		return T();
	}
}


template <class T>
void CMsgRepository<T>::clean()
{
	if (NULL != m_pfifo)
	{
		m_pfifo->clean();
	}
}


template <class T>
bool CMsgRepository<T>::setCapacity(int capacity)
{
	if (NULL != m_pfifo)
	{
		m_pfifo->setCapacity(capacity);
		return true;
	}
	else
	{
		return false;
	}
}


template <class T>
int CMsgRepository<T>::getMsgCount()
{
	if (NULL != m_pfifo)
	{
		return m_pfifo->size();
	}
	else
	{
		return 0;
	}
}


template <class T>
int CMsgRepository<T>::getCapacity()
{
	if (NULL != m_pfifo)
	{
		return m_pfifo->capacity();
	}
	else
	{
		return 0;
	}
}


#endif // !__MSGREPOSITORY_H__
