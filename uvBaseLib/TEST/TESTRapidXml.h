#ifndef _TEST_RAPID_XML_H_
#define _TEST_RAPID_XML_H_

/**
* �������������޳�û������������
*��������������    ����
*�����������ߩ��������ߩ�
*��������������������  �� ��
*��������      ������  ��
*������������������������
*������������������������
*���������������ߡ�������
*����������������	   ��
*������������������������
*������������������������������������������
*������������������������
*��������������������
*����������������������������������������
*�������������� �� ����������
*������������ ��������     �ǩ�
*������������ ����������   ����
*���������������������ש�����
*���������������ϩ�  ���ϩ�
*���������������ߩ�  ���ߩ�
*
* Create by chen, 2018/1/11
**/

class CTestRapidXml
{
public:
	CTestRapidXml();
	~CTestRapidXml();

public:
	void ParseXml(char* path);
	void NewXml(char* path);
};

#endif