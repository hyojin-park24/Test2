/*	�ۼ��� : ��ȿ��
	�ۼ��� : 2021�� 5�� 19��(��)

	<����>
	�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 
	0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

	>>�Է�
	ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. 
	A, B, C�� ��� 100���� ũ�ų� ����, 1,000���� ���� �ڿ����̴�.

	>>���
	ù° �ٿ��� A �� B �� C�� ����� 0 �� �� �� �������� ����Ѵ�. 
	���������� ��° �ٺ��� �� ��° �ٱ��� A �� B �� C�� ����� 
	1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;
	int res;

	//�� �� �ٿ� ���� ���� �� �ֵ��� �Է¹ޱ�
	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);

	//A,B,C ���ϴ� ����� 
	res = a * b * c;

	// �Է� ���� �𸣰ھ�� ��������..

	return 0;
}