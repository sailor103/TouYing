
// TouYingView.cpp : CTouYingView ���ʵ��
//

#include "stdafx.h"
#include "TouYing.h"

#include "TYYanshi.h"
#include "cal.h"

#include "TouYingDoc.h"
#include "TouYingView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTouYingView

IMPLEMENT_DYNCREATE(CTouYingView, CView)

BEGIN_MESSAGE_MAP(CTouYingView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTouYingView::OnFilePrintPreview)
	ON_COMMAND(ID_DISPLAY, &CTouYingView::OnDisplay)
END_MESSAGE_MAP()

// CTouYingView ����/����

CTouYingView::CTouYingView()
{
	// TODO: �ڴ˴���ӹ������

}

CTouYingView::~CTouYingView()
{
}

BOOL CTouYingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CTouYingView ����

void CTouYingView::OnDraw(CDC* /*pDC*/)
{
	CTouYingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CTouYingView ��ӡ


void CTouYingView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CTouYingView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CTouYingView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CTouYingView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CTouYingView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTouYingView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CTouYingView ���

#ifdef _DEBUG
void CTouYingView::AssertValid() const
{
	CView::AssertValid();
}

void CTouYingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTouYingDoc* CTouYingView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTouYingDoc)));
	return (CTouYingDoc*)m_pDocument;
}
#endif //_DEBUG


// CTouYingView ��Ϣ�������

void CTouYingView::OnDisplay()
{
	// TODO: �ڴ���������������
	CTYYanshi YS_Dlg;
	YS_Dlg.DoModal();
    CDC *pDC;
	pDC=this->GetDC();
	//pDC->MoveTo(1,8);
	//pDC->LineTo(100,100);
	//����xy��
	int X=getX(YS_Dlg.m_ZDWD,YS_Dlg.m_ZDWD,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,YS_Dlg.m_ZYJX,YS_Dlg.m_ZYJX);
	int Y=getY(YS_Dlg.m_ZDWD,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,YS_Dlg.m_ZYJX,YS_Dlg.m_ZYJX);
	pDC->MoveTo(300,600);
	pDC->LineTo(300,50);
	pDC->TextOutW(300,30,_T("X��"));
	

	pDC->MoveTo(20,300);
	pDC->LineTo(600,300);
	pDC->TextOutW(620,300,_T("Y��"));

	//��γ��
	int i,j;
	for( i=36;i<=43;i++)
	{
		for( j=112;j<=119;j++)
		{
			//pDC->MoveTo(10*getX(YS_Dlg.m_ZDWD,i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j,YS_Dlg.m_ZYJX)+300,10*getY(i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j,YS_Dlg.m_ZYJX)+300);
			
			pDC->MoveTo(10*getY(i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j,YS_Dlg.m_ZYJX)+300,-10*getX(YS_Dlg.m_ZDWD,i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j,YS_Dlg.m_ZYJX)+300);
			
			//pDC->LineTo(10*getX(YS_Dlg.m_ZDWD,i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j+1,YS_Dlg.m_ZYJX)+300,10*getY(i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j+1,YS_Dlg.m_ZYJX)+300);
			pDC->LineTo(10*getY(i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j+1,YS_Dlg.m_ZYJX)+300,-10*getX(YS_Dlg.m_ZDWD,i,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,j+1,YS_Dlg.m_ZYJX)+300);

		}
	}

	//������
    for(i=112;i<=120;i++)
	{
	    for(j=36;j<=42;j++)
		{
			//pDC->MoveTo(10*getX(YS_Dlg.m_ZDWD,j,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300,10*getY(j,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300);
			
			pDC->MoveTo(10*getY(j,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300,-10*getX(YS_Dlg.m_ZDWD,j,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300);
			
			//pDC->LineTo(10*getX(YS_Dlg.m_ZDWD,j+1,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300,10*getY(j+1,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300);
			
			pDC->LineTo(10*getY(j+1,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300,-10*getX(YS_Dlg.m_ZDWD,j+1,YS_Dlg.m_AERFA,YS_Dlg.m_JFCS,i,YS_Dlg.m_ZYJX)+300);


		}
	}



	this->ReleaseDC(pDC);
}
