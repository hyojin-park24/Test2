/*	작성자 : 박효진
	작성일 : 2021년 5월 19일(수)

	<문제>
	세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 
	0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오

	>>입력
	첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. 
	A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.

	>>출력
	첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다. 
	마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에 
	1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;
	int res;

	//각 각 줄에 숫자 넣을 수 있도록 입력받기
	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);

	//A,B,C 곱하는 연산식 
	res = a * b * c;

	// 입력 부터 모르겠어요 진심으로..

	return 0;
}