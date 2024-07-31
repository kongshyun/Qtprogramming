// 07�� 31�� 3���� Day3
// 



/*
// ���ø�
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
	cout << "donut ������=" << donut.getRadius() << ",";
	cout << "pizza ������=" << pizza.getRadius() << endl;
}


*/

/*
//���� 10-4

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
//���� 10-5 , char�迭�� ���� ���ڷ� ����ϱ�!!

#include<iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array[], int n) { // ���ø� �Լ��� ������ �̸��� �Լ� �ߺ�
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t'; // array[i]�� intŸ������ ��ȯ�Ͽ� �������
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
//`���׸� Ŭ����! 

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
	MyStack<int> iStack; // int�� ������ �� �ִ� ����
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
//����10-8
//�ΰ��� ���׸� Ÿ���� ���� Ŭ����

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


//Ŭ���� �Ű��Լ� ����
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
	GClass <int, double> x;//Ŭ���� ��ü ����
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
//���� 10-9

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

//���� 10-10 , page.503

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> sv; //���ڿ� ���� ����
	string name;

	cout << "�̸��� 5�� �Է��϶�" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0); // ������ ù��° �̸�
	for (int i = 1; i < sv.size(); i++)
	{
		if (name < sv[i])
			name = sv[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
}

*/


/*
//���� 10-11
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


	vector<int>::iterator it; // ���� V�� ���ҿ� ���� ������ it����

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

//���� 10-12 , map���� ���ѻ��������

#include <iostream>
#include <string>

#include <map>

using namespace std;

int main()
{
	map < string, string> dic;
	
	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("apple", "���"));
	dic["cherry"] = "ü��";

	cout << " ����� �ܾ� ���� " << dic.size() << endl;
	string eng;
	while (true) {
		cout << "ã�� ���� �ܾ�>> ";
		getline(cin, eng);
		if (eng == "exit")
			break;
		if (dic.find(eng) == dic.end()) //dic.find(eng)�� ����� dic.end()�� ���ϰ��� ���ٸ�, \
										dic���� eng�� ����. \
										eng 'Ű'�� ������ ã�Ҵµ� ����
			cout << "����" << endl;
		else
			cout << dic[eng] << endl;
	}
	cout << "�����մϴ�." << endl;
}

*/



/*
//���� 10-13
//sort �� ����Ͽ� �����ϱ�

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	vector<int> v;
	cout << "5���� ������ �Է��ϼ���>> ";
	for (int i = 0; i < 5; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	
	//v.begin() ���� v.end()������ ���� ������������ ����
	//sort() �Լ��� ������ ���� v�� ���� ������ �����
	sort(v.begin(), v.end());

	vector<int>::iterator it; // ���� ���� ���Ҹ� Ž���ϴ� iterator ���� ����

	for (it = v.begin(); it != v.end(); it++) // ���� v�� ��� ���� ���
		cout << *it << ' ';
	cout << endl;
}
*/



/*
//���� 10-14
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
	for (auto it = v.begin(); it != v.end(); it++) // auto�� ����Ͽ� ������ ���� ����ȭ
		cout << *it << " ";
	//---------
}


*/


/*
#include <iostream>
using namespace std;
int main()
{
	[](int x, int y) { cout << "���� " << x + y; } (2, 3); // �Լ� ������ �ڿ� �ٷ� �� ����.
}

*/


/*
//���� 10 -16
//page.515

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//���ٽ��� love������ ����
	auto love = [](string a, string b){
		cout << a << "���� " << b << "�� ����" << endl;
	};
	love("��", "��");
	love("�ø�", "����");
}
*/

/*
//������ ����
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
	cout << "������ " << calc(3);
}
*/




/*

//for_each()�Լ�
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





