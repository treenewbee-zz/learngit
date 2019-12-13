#pragma once
#include "Shape.h"
class CText : public CShape
{
protected:
	CString Content;//�ı�������
					//int Angle;//�ı�����ת�Ƕ�
public:
	CText(int x, int y, CString content);
	void Draw(CDC* pDC);//�����ı�����
	bool IsMatched(CPoint pnt);
	void Serialize(CArchive& ar);
	void SetAttribute(int nX, int nY, COLORREF nBorderColor, int nBorderType, int nBorderWidth, COLORREF nFillColor, int nFillType);
	~CText();

	DECLARE_SERIAL(CText)//������WText��֧�����л�
};
