// TYYanshi.cpp : 实现文件
//

#include "stdafx.h"
#include "TouYing.h"
#include "TYYanshi.h"
#include "cal.h"


// CTYYanshi 对话框

IMPLEMENT_DYNAMIC(CTYYanshi, CDialog)

CTYYanshi::CTYYanshi(CWnd* pParent /*=NULL*/)
	: CDialog(CTYYanshi::IDD, pParent)
	, m_ZYJX(0)
	, m_WX1(0)
	, m_WX2(0)
	, m_BLC(0)
	, m_MIDU(0)
	, m_U1(0)
	, m_U2(0)
	, m_AERFA(0)
	, m_JFCS(0)
	, m_ZXCDB(0)
	, m_JD(0)
	, m_WD(0)
	, m_ZBX(0)
	, m_ZBY(0)
	, m_ZDWD(0)
{

}

CTYYanshi::~CTYYanshi()
{
}

void CTYYanshi::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ZYJX, m_ZYJX);
	DDX_Text(pDX, IDC_EDIT_WX1, m_WX1);
	DDX_Text(pDX, IDC_EDIT_WX2, m_WX2);
	DDX_Text(pDX, IDC_EDIT_BLC, m_BLC);
	DDX_Text(pDX, IDC_EDIT_MIDU, m_MIDU);
	DDX_Text(pDX, IDC_EDIT_U1, m_U1);
	DDX_Text(pDX, IDC_EDIT_U2, m_U2);
	DDX_Text(pDX, IDC_EDIT_AERFA, m_AERFA);
	DDX_Text(pDX, IDC_EDIT_JFCS, m_JFCS);
	DDX_Text(pDX, IDC_EDIT_ZXCDB, m_ZXCDB);
	DDX_Text(pDX, IDC_EDIT_JD, m_JD);
	DDX_Text(pDX, IDC_EDIT_WD, m_WD);
	DDX_Text(pDX, IDC_EDIT_ZBX, m_ZBX);
	DDX_Text(pDX, IDC_EDIT_ZBY, m_ZBY);
	DDX_Text(pDX, IDC_EDIT_ZDWD, m_ZDWD);
}


BEGIN_MESSAGE_MAP(CTYYanshi, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_INPUT, &CTYYanshi::OnBnClickedButtonInput)
	ON_BN_CLICKED(IDC_BUTTON_CHECK, &CTYYanshi::OnBnClickedButtonCheck)
END_MESSAGE_MAP()


// CTYYanshi 消息处理程序

void CTYYanshi::OnBnClickedButtonInput()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(TRUE);
	this->m_U1=getU(this->m_WX1);
	this->m_U2=getU(this->m_WX2);
	this->m_AERFA=getAERFA(this->m_WX1,this->m_WX2,m_U1,m_U2);
	this->m_JFCS=getK(m_WX1,m_U1,m_AERFA,this->m_BLC);
	this->m_ZXCDB=getFAI(this->m_AERFA);
	this->UpdateData(FALSE);

}

void CTYYanshi::OnBnClickedButtonCheck()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(TRUE);
	this->m_ZBX=getX(this->m_ZDWD,this->m_WD,this->m_AERFA,this->m_JFCS,this->m_JD,this->m_ZYJX);
	this->m_ZBY=getY(this->m_WD,this->m_AERFA,this->m_JFCS,this->m_JD,this->m_ZYJX);
	this->UpdateData(FALSE);
}
