// 07월 31일 3주차 Day3
// 



/*
// 템플릿
#include <iostream>
using namespace std;


class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a=" << a << "," << "b=" << b << endl;
	double c = 0.3 ,d = 12.5;
	myswap(c, d);
	cout << "c=" << c << "," << "d=" << d << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut 반지름=" << donut.getRadius() << ",";
	cout << "pizza 반지름=" << pizza.getRadius() << endl;
}


*/

/*
//예제 10-4

#include <iostream>

using namespace std;

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {
	for (int i = 0; i < n; i++)
		dest[i] = (T2)src[i];
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H', 'e','l','l','o' }, e[5];

	mcopy(x, d, 5);
	mcopy(c, e, 5);

	for (int i = 0; i < 5; i++) cout << d[i] << ' ';
	cout << endl;
	for (int i = 0; i < 5; i++) cout << e[i] << ' ';
	cout << endl;

}

*/


/*
//예제 10-5 , char배열의 값도 숫자로 출력하기!!

#include<iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array[], int n) { // 템플릿 함수의 동일한 이름의 함수 중복
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t'; // array[i]를 int타입으로 변환하여 정수출력
	cout << endl;
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
	print(x, 5);
	print(d, 5);

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}
*/

/*
//`제네릭 클래스! 

#include <iostream>

using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99)
	{
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}

int main() {
	MyStack<int> iStack; // int만 저장할 수 있는 스택
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();
	p->push('a');
	cout << p->pop() << endl;
	delete p;
}

*/


/*
//예제10-8
//두개의 제네릭 타입을 가진 클래스

#include <iostream>
using namespace std;

template <class T1, class T2>
class GClass {
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};


//클래스 매개함수 구현
template <class T1, class T2>
GClass<T1, T2>::GClass() {
	data1 = 0; data2 = 0;
}

template < class T1, class T2>
void GClass<T1, T2> ::set(T1 a, T2 b) {
	data1 = a; data2 = b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
	a = data1; b = data2;
}

int main()
{
	int a;
	double b;
	GClass <int, double> x;//클래스 객체 선언
	x.set(2, 0.5);
	x.get(a, b); 
	cout << "a=" << a << '\t' << "b=" << b << endl;

	char c;
	float d;
	GClass <char, float> y;
	y.set('m', 12.5);
	y.get(c, d);
	cout << "c=" << c << '\t' << "d=" << d << endl;
}
*/


/*
//예제 10-9

#include< iostream >
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	v[0] = 10;
	int m = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

*/


/*

//예제 10-10 , page.503

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> sv; //문자열 벡터 생성
	string name;

	cout << "이름을 5개 입력하라" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0); // 벡터의 첫번째 이름
	for (int i = 1; i < sv.size(); i++)
	{
		if (name < sv[i])
			name = sv[i];
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
}

*/


/*
//예제 10-11
//iterator
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);


	vector<int>::iterator it; // 벡터 V의 원소에 대한 포인터 it선언

	for (it = v.begin(); it != v.end(); it++) {
		int n = *it;
		n = n * 2;
		*it = n;

	}

	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;
}

*/


/*

//예제 10-12 , map으로 영한사전만들기

#include <iostream>
#include <string>

#include <map>

using namespace std;

int main()
{
	map < string, string> dic;
	
	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";

	cout << " 저장된 단어 개수 " << dic.size() << endl;
	string eng;
	while (true) {
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng);
		if (eng == "exit")
			break;
		if (dic.find(eng) == dic.end()) //dic.find(eng)의 결과가 dic.end()의 리턴값과 같다면, \
										dic에는 eng가 없음. \
										eng '키'를 끝까지 찾았는데 없음
			cout << "없음" << endl;
		else
			cout << dic[eng] << endl;
	}
	cout << "종료합니다." << endl;
}

*/



/*
//예제 10-13
//sort 를 사용하여 정렬하기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	vector<int> v;
	cout << "5개의 정수를 입력하세요>> ";
	for (int i = 0; i < 5; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	
	//v.begin() 에서 v.end()사이의 값을 오름차순으로 정렬
	//sort() 함수의 실행결과 벡터 v의 원소 순서가 변경됨
	sort(v.begin(), v.end());

	vector<int>::iterator it; // 벡터 내의 원소를 탐색하는 iterator 변수 선언

	for (it = v.begin(); it != v.end(); it++) // 벡터 v의 모든 원소 출력
		cout << *it << ' ';
	cout << endl;
}
*/



/*
//예제 10-14
#include <iostream>
#include <vector>

using namespace std;
int square(int x) { return x * x; }

int main()
{
	auto c = 'a'; // char
	auto pi = 3.14; //double
	auto ten = 10; //int
	auto* p = &ten; //int*
	cout << c << " " << pi << " " << ten << " " << *p << endl;

	auto ret = square(3); // int
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 };

	//---------
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
	//---------
	for (auto it = v.begin(); it != v.end(); it++) // auto를 사용하여 복잡한 선언 간소화
		cout << *it << " ";
	//---------
}


*/


/*
#include <iostream>
using namespace std;
int main()
{
	[](int x, int y) { cout << "합은 " << x + y; } (2, 3); // 함수 구현부 뒤에 바로 값 넣음.
}

*/


/*
//예제 10 -16
//page.515

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//람다식을 love변수에 저장
	auto love = [](string a, string b){
		cout << a << "보다 " << b << "가 좋아" << endl;
	};
	love("돈", "너");
	love("냉면", "만두");
}
*/

/*
//교수님 예제
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	int x = 10;
	int arr[10];

	auto love = [](string a, string b) { cout << a + b << endl; return a + b; }
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	double pi = 3.14;
	auto calc = [pi](int r) -> double {return pi * r * r; };
	cout << "면적은 " << calc(3);
}
*/




/*

//for_each()함수
//page 517

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n)
{
	cout << n << " ";
}

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9};
	for_each(v.begin(), v.end(), print);
}

*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5 };
	for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
}





