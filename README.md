## chapter 8 상속과 다형성

### 8-1 객체 포인터의 참조관계

객체 포인터 변수: 객체의 주소 값을 저장하는 포인터 변수
- AAA형 포인터 변수는 AAA 객체 또는 AAA를 직접 혹은 간접적(상속한 것을 상속)으로 상속하는 모든 객체를 가리킬 수 있다. 

함수 오버라이딩: 오버라이딩 된 기초 클래스의 함수는, 오버라이딩을 한 유도 클래스의 함수에 가려진다.
- 기초 클래스와 유도 클래스에 동일한 이름과 형태의 두 함수.
- 매개변수의 자료형 및 개수가 다르면, 이는 함수 오버로딩이 되어, 전달되는 인자에 따라서 호출되는 함수가 결정된다.
- 기초클래스::함수 = 오버라이딩 된 기초 클래스의 함수를 호출한다.

### 8-2 가상함수(virtual function)
C++ 컴파일러는 포인터를 이용한 연산의 가능성 여부를 판단할 때, 포인터의 자료형을 기준으로 판단하지, 실제 가리키는 객체의 자료형을 기준으로 판단하지 않는다.
- 포인터 형에 해당하는 클래스에 정의된 멤버에만 접근이 가능.

virtual: 가상함수 선언
- 가상함수가 선언되고 나면, 이 함수를 오버라이딩 하는 함수도 가상함수가 된다.
- 함수가 가상함수로 선언되면, 해당 함수호출 시, 포인터의 자료형을 기반으로 호출대상을 결정하지 않고, 포인터 변수가 실제로 가리키는 객체를 참조하여 호출의 대상을 결정한다.

순수 가상함수: 함수의 몸체가 정의되지 않은 함수.
- 객체 생성을 목적으로 정의되지 않는 클래스도 존재.
- 잘못된 객체의 생성을 막기 위해 "=0"
- 하나 이상의 멤버함수를 순수 가상함수로 선언한 클래스를 가리켜 '추상 클래스' = 완전하지 않은, 객체생성이 불가능한 클래스.

### 8-3 가상 소멸자와 참조자의 참조 가능성
