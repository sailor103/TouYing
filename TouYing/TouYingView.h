
// TouYingView.h : CTouYingView ��Ľӿ�
//


#pragma once


class CTouYingView : public CView
{
protected: // �������л�����
	CTouYingView();
	DECLARE_DYNCREATE(CTouYingView)

// ����
public:
	CTouYingDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CTouYingView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDisplay();
};

#ifndef _DEBUG  // TouYingView.cpp �еĵ��԰汾
inline CTouYingDoc* CTouYingView::GetDocument() const
   { return reinterpret_cast<CTouYingDoc*>(m_pDocument); }
#endif

