
// TouYingDoc.cpp : CTouYingDoc ���ʵ��
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


// CTouYingDoc ����/����

CTouYingDoc::CTouYingDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CTouYingDoc::~CTouYingDoc()
{
}

BOOL CTouYingDoc::OnNewDocument()
{
	SetTitle(L"����ȽǸ�Բ׶ͶӰ");
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CTouYingDoc ���л�

void CTouYingDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CTouYingDoc ���

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


// CTouYingDoc ����
