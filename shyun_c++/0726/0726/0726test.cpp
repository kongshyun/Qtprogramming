/*
* //C++ 4-6����
#include <iostream>

using namespace std;

int main() {
    cout << "�Է��� ������ ������?";
    int n;
    cin >> n;

    if (n <= 0) return 0;
    int* p = new int[n];
    
    if (!p) {
        cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "��° ����: ";
        cin >> p[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum +=p[i];

    cout << "��� " << sum/n << endl;
    

    delete []p;
}*/

/*

//������ ���� ����\
�ǿ����ڴ� �������� Ÿ���� �ƴϾ���Ѵ�. �Ʒ� �ڵ� �����?
#include <stdio.h>

int main()
{
    char x, y;
    x = -128;
    y = -x;

    if (x == y)    printf("1\n");
    if ((x - y) == 0)   printf("2\n");
    if ((x + y) == 2 * x) printf("3\n");
    if (x != -y)   printf("4\n");

    return 0;
}//4���� ��µ�.


//
*/
/*
#include <stdio.h>

int main()
{
    int a = 0, b = 0, sum1, sum2;

    sum1 = a++ + a++ + a++;
    sum2 = ++b + ++b + ++b;
    printf("%d %d %d %d\n", a, b, sum1, sum2);
    return 0;
}
//��� \
�� 3 3 3 6\
������ 3 3 0 9

*/
/*

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�. (�ѱ۾ȵ�) " << endl;
    getline(cin, s, '\n');
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        string first = s.substr(0, 1);
        string sub = s.substr(1, len - i);
        s = sub + first;
        cout << s << endl;
    }
}




*/


/*
// 4�� ���ڿ����� ���� ã�Ƽ� �ٲٱ⿹��
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "������ �Է��ض�. �Է� ���� &����." << endl;
    getline(cin, s, '&');// ��ĭ�� �����Ͽ� �Է¹ޱ�
    cin.ignore(); // & �ڿ� ������� enterŰ�� �����ϱ� ���� �ڵ�

    string f, r;
    cout << endl << "find: ";
    getline(cin, f, '\n');
    cout << "replace: ";
    getline(cin, r, '\n');

    int startIndex = 0;
    while (true) {
        int fIndex = s.find(f, startIndex);
        if (fIndex == -1) break;
        s.replace(fIndex, f.length(), r);
        startIndex = fIndex + r.length();
    }
    cout << s << endl;
}


*/

/*
//�ּҿ� ���� ȣ�� ����
#include <iostream>
using namespace std;

void swap(int* a, int* b) //������ �Ű����� a,b�� swap()�� ���ÿ� ����
{
    int temp;  

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int m = 2, n = 9;
    swap(&m, &n);
    cout << m << ' '<< n << endl;
}*/


/*
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14 * radius * radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
    radius = 1;
    cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int radius) {
    this->radius = radius;
    cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
    cout << "�Ҹ��� ���� radius = " << radius << endl;
}
void increase(Circle *p) { //main�Լ��� waffle�� �״�� c�� �����.
    int r = p ->getRadius();
    p ->setRadius(r + 1);
}
int main()
{
    Circle waffle(30);
    increase(&waffle);
    cout << waffle.getRadius() << endl;

}
*/
/*
#include <iostream>

using namespace std;

class Circle {

    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius;  }
};

Circle getCircle() {
    Circle tmp(30);
    return tmp;
}

int main() {
    Circle c;
    cout << c.getArea() << endl;
    c = getCircle();
    cout << c.getArea() << endl;
}
*/
/*

//C++ ���� 5-3\
�⺻ Ÿ�� ������ ���� ����

#include <iostream>
using namespace std;

int main() {
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i = 1;
    int n = 2;
    int &refn = n; // int &refn = 20 �̷������� �ȵ�.
    n = 4;
    refn++; // refn = 5, n=5
    cout << i << '\t' << n << '\t' << refn << endl;
    
    refn = i;
    refn++;
    cout << i << '\t' << n << '\t' << refn << endl;

    int* p = &refn; //p�� refn�� �ּҸ� ����. p �� n���ּ�
    *p = 20; // refn = 20 , n=20
    cout << i << '\t' << n << '\t' << refn << endl;
}

*/


//���� 5-4
/*
#include <iostream>
using namespace std;

class Circle {

    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    Circle circle;
    Circle& refc = circle;
    refc.setRadius(10);
    cout << refc.getArea() << " " << circle.getArea();

}
*/

/*
#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;


}
int main()
{
    int n = 5, m = 7;
    swap(n, m);

    cout << " n = " << n << " m = " << m << endl;

}

*/

/*
#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius;}
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c)
{
    int r;
    cout << " ���� ������ �������� �Է��ϼ��� >> ";
    cin >> r;
    c.setRadius(r);
}
int main() {
    Circle donut;
    readRadius(donut);
    cout << " donut �� ���� = " << donut.getArea() << endl;
}

*/

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char* name;
    int id;
public:
    Person(int id, const char* name); //���� ������ ����
    Person(const Person& person);
    ~Person();
    void changeName(const char* name);
    void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const char* name) {
    this->id=id;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
}

Person::Person(const Person& person) {
    this->id = person.id;
    int len = strlen(person.name);
    this->name = new char[len + 1];
    strcpy(this->name, person.name);
    cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl;
}

Person::~Person() {
    if (name)
        delete[] name;
}

void Person::changeName(const char* name) {
    if (strlen(name) > strlen(this->name))
        return;
    strcpy(this->name, name);
}

int main() {
    Person father(1, "Kitae");
    Person dauther(father);
    cout << " dauther ��ü ���� ���� ---- " << endl;
    father.show();
    dauther.show();

    dauther.changeName("Grace");
    cout << " dauther �̸��� Grace�� ������ �� ----" << endl;
    father.show();
    dauther.show();

    return 0;
}





















