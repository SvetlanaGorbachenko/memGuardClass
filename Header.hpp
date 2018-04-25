#pragma once

template <typename T>
class memGuardClass
{
	T *m_pData;
	bool m_bArray;
public:
	memGuardClass(T *pData = 0, bool bArray = false): m_pData(pData), m_bArray(bArray)
	{
		cout << "constructor memGuardClass with parameters: m_pData = " << m_pData << " m_bArray = " << m_bArray << " this: " << this << endl;
	}
	~memGuardClass()
	{
		if (m_bArray != false)
		{
			delete[] m_pData;
		}
		else
		{
			delete m_pData;
		}
		
		cout << "destructor ~memGuardClass() fot this: " << this << endl;
	}
};
