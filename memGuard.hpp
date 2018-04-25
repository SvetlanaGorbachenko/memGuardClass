#pragma once

template <typename T>
class memGuard
{
	T *m_pData;
	bool m_bArray;
public:
	memGuard(T *pData = 0, bool bArray = false): m_pData(pData), m_bArray(bArray)
	{
		cout << "constructor memGuard with parameters: m_pData = " << m_pData << " m_bArray = " << m_bArray << " this: " << this << endl;
	}
	~memGuard()
	{
		if (m_bArray != false)
		{
			delete[] m_pData;
		}
		else
		{
			delete m_pData;
		}
		
		cout << "destructor ~memGuard() fot this: " << this << endl;
	}
};
