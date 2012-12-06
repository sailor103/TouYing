
// TouYingDoc.cpp : CTouYingDoc 类的实现
//

#include "stdafx.h"
#include "TouYing.h"

#include "TouYingDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTouYingDoc

IMPLEMENT_DYNCREATE(CTouYingDoc, CDocument)

BEGIN_MESSAGE_MAP(CTouYingDoc, CDocument)
END_MESSAGE_MAP()


// CTouYingDoc 构造/析构

CTouYingDoc::CTouYingDoc()
{
	// TODO: 在此添加一次性构造代码

}

CTouYingDoc::~CTouYingDoc()
{
}

BOOL CTouYingDoc::OnNewDocument()
{
	SetTitle(L"正轴等角割圆锥投影");
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CTouYingDoc 序列化

void CTouYingDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CTouYingDoc 诊断

#ifdef _DEBUG
void CTouYingDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTouYingDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTouYingDoc 命令
