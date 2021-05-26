/*
 * 파일이름: AccountArray.h
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 02, 01] 파일버전 0.1
 */

#ifndef __ACCOUN_ARRAY_H__
#define __ACCOUN_ARRAY_H__

#include "Account.h"
 
typedef Account * ACCOUNT_PTR; // Account 포인터 형을 ACCOUNT_PTR로 정의했다.

class BoundCheckAccountPtrArray // 배열 클래스 정의!!
{
private:
	ACCOUNT_PTR * arr;
	int arrlen;

	BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray& arr) { }
	BoundCheckAccountPtrArray& operator=(const BoundCheckAccountPtrArray& arr) { } // 대입 연산자 오버로딩 
	// 복사 연산자와 대입 연산자를 private로 선언해서, 복사 또는 대입을 원칙적으로 막음.

public:
	BoundCheckAccountPtrArray(int len=100);
	ACCOUNT_PTR& operator[] (int idx);
	ACCOUNT_PTR operator[] (int idx) const; 
	int GetArrLen() const;
	~BoundCheckAccountPtrArray();
};
#endif
