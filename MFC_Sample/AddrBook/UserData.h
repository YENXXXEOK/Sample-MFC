#pragma once
#include <afx.h>
class CUserData :
    public CObject
{
private:
    CString m_strName;
    CString m_strPhone;

public: 
    CUserData(CString name, CString phone)
    {
        m_strName = name;
        m_strPhone = phone;
    }

    CString GetName() { return m_strName; }
    CString GetPhone() { return m_strPhone; }
};

