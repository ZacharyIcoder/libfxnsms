#ifndef _FXN_SMS_H_
#define _FXN_SMS_H_

/*
��fxn_send���ط�0���ñ�����¼������Ϣ
*/
char *fxn_error;

/*
mobile:		����ֻ���
password:	��ķ�������
to:			�����ߵ��ֻ��Ż���ź�
sms:		Ҫ���͵Ķ�������
tocell:		0��ʾ��������߷��͵����ţ�1��ʾǿ�Ʒ��͵��ֻ�
verbose:	0�����ϸ�ڣ�1���ϸ�ڷ������
*/
int fxn_send(const char *mobile, const char *password, const char *to, const char *sms, const int tocell, const int verbose);

#endif