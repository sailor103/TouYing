#pragma once


// CTYYanshi �Ի���

class CTYYanshi : public CDialog
{
	DECLARE_DYNAMIC(CTYYanshi)

public:
	CTYYanshi(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTYYanshi();

// �Ի�������
	enum { IDD = IDD_DIALOG_TOUYING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	double m_ZYJX;
	double m_WX1;
	double m_WX2;
	double m_BLC;
	double m_MIDU;
	double m_U1;
	double m_U2;
	double m_AERFA;
	double m_JFCS;
	double m_ZXCDB;
	double m_JD;
	double m_WD;
	double m_ZBX;
	double m_ZBY;
	afx_msg void OnBnClickedButtonInput();
	double m_ZDWD;
	afx_msg void OnBnClickedButtonCheck();
};
