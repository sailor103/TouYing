
// TouYingDoc.h : CTouYingDoc ��Ľӿ�
//


#pragma once


class CTouYingDoc : public CDocument
{
protected: // �������л�����
	CTouYingDoc();
	DECLARE_DYNCREATE(CTouYingDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CTouYingDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


