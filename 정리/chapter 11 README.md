## Chapter 11 연산자 오버로딩 2

### 11-1 반드시 해야 하는 대입 연산자의 오버로딩
복사 생성자와 대입 연산자의 차이점 = 호출 시점
- 복사 생성자 : 새로 생성하는 객체의 초기화에 기존 생성된 객체를 사용.
- 대입 연산자 : 기존에 생성된 두 객체간의 대입연산 시에 호출.

디폴트 대입 연산자의 문제점 & 해결
- 디폴트 대입 연산자는 멤버 대 멤버를 단순히 복사만 하므로 두 개의 객체가 하나를 동시에 참조하는 상황이 벌어진다.
- 생성자 내에서 동적 할당을 하는 경우, 원래 참조하던 주소 값을 잃게 되며, 얕은 복사로 인해 객체 소멸과정에서 중복 소멸하는 문제가 발생한다.
- 깊은 복사를 진행하며, 메모리 누수를 막기위해, 깊은 복사에 앞서 메모리 해제의 과정을 거친다.

상속 구조에서의 대입 연산자 호출
- 대입 연산자는 생성자가 아니기 때문에 유도 클래스의 대입 연산자에 아무런 명시를 하지 않으면, 기초 클래스의 대입 연산자가 호출되지 않는다.
- 유도 클래스의 대입 연산자를 정의해야 하는 상황에 놓이게 되면, 기초 클래스의 대입 연산자를 명시적으로 호출해야 한다.

### 11-2 배열의 인덱스 연산자 오버로딩
배열보다 나은 배열 클래스
- 배열의 역할을 하는 클래스
- 배열요소에 접근하기 위해 [] 연산자의 오버로딩.
- 배열은 저장소의 일종이고, 저장소에 저장된 데이터는 '유일성'이 보장되어야 하기 때문에 복사 생성자와 대입 연산자를 private 멤버로 둠으로써 막는 것이 좋다.

const 함수를 이용한 오버로딩의 활용
- const의 선언 유무도 함수 오버로딩의 조건.
- 함수 내에서 배열에 저장된 데이터를 변경하지 못하도록 매개변수 형이 const로 선언.
- 오버로딩된 함수에 const 선언을 추가하면 배열 요소의 값을 단순히 반환하는 형태로 정의됨.

### 11-3 그 이외의 연산자 오버로딩 (부록이니 간단하게 이해만)
1. new 연산자 오버로딩 - new 연산가 하는 일 중 메모리 공간 할당만 오버로딩 가능하다.

2. delete 연산자 오버로딩 - 할당된 메모리 공간의 소멸을 책임.

3. 포인터 연산자 오버로딩 - 피 연산자가 하나인 단항 연산자의 형태로 오버로딩
#### 스마트 포인터
- 자기 스스로 하는 일이 존재하는 포인터
- 사실은 객체이다. 포인터의 역할을 하는 객체.

4. 연산자 ()의 오버로딩 - 객체를 함수처럼 사용할 수 있다.
#### 핑터
- 함수처럼 동작하는 클래스
- 함수 또는 개체의 동작방식에 유연함을 제공할 때 주로 사용

5. 형 변환 연산자의 오버로딩 - 반환형이 없음에서 반환을 함.
