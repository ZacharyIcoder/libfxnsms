
## libfxnsms: a C library for Sending SMS through Fetion(���ڷ����ŵ�C��)


### ����

+ ʹ��libfxnsms�ṩ�Ľӿڣ���ָ���ֻ���/���źŷ��Ͷ���
+ ����ѡ���͵����Ż�ֱ�ӵ��ֻ�
+ UTF-8����
+ ������

### API(UTF-8����)

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
		int fxn_send(const char *mobile, 
				const char *password, 
				const char *to, 
				const char *sms, 
				const int tocell, 
				const int verbose);

### ����ʹ��

+ ���ص�ַ��<http://code.google.com/p/libfxnsms/>

+ ��װ��

		tar xzvf libfxnsms-0.1.tar.gz
		cd libfxnsms
		sudo make install
		
		ж�أ�
		cd libfxnsms
		sudo make clean
		
+ ʾ�����룺
		
		//ע�⣺������Ҫ����ΪUTF-8����
		#include "fxn_sms.h"
		#include <stdio.h>

		int main(int argc, char *argv[]) {
			//���Ͷ���
			if (fxn_send("13800138000", "password", "13500135000", "���Զ��ţ�test sms", 1, 1)) {
				printf("success\n");	
			} else {
				printf("%s\n", fxn_error);
			}
			return 0;
		}
		
+ ��������У�

		//ʹ�þ�̬��
		gcc -o test test.c -lfxnsms -static
		./test
		
		//ʹ�ö�̬��
		gcc -o test test.c -lfxnsms
		./test

### �����й��ߣ�

���ذ��е�`example/cli.c`Ϊʹ��libfxnsms��ʵ�ֵ��������·��Ͷ��ŵ�С���ߣ����룺

		gcc -o cli cli.c -lfxnsms

ʹ��cli�������з����ţ�

		./cli -h

		Sending SMS to your Fetion friends written by Min (http://54min.com)

		  -m     your mobile number (required)
		  -p     your Fetion password (required)
		  -t     mobile number or Fetion Id of your friend (required)
		  -s     sms to send (required)
		  -c     in default the sms is sent to Fetion,
			 if set, sms will be sent to cell phone directly
		  -v     if set, show detail
		  -h     print this help and exit
		
		���Ͷ���
		./cli -m 13800138000 -p password -t 13500135000 -s "the sms to send" -cv

����ʵ�����ذ��е�`example`�ļ���
