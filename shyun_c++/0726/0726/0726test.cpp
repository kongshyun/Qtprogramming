/*
* //C++ 4-6예제
#include <iostream>

using namespace std;

int main() {
    cout << "입력할 정수의 개수는?";
    int n;
    cin >> n;

    if (n <= 0) return 0;
    int* p = new int[n];
    
    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수: ";
        cin >> p[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum +=p[i];

    cout << "평균 " << sum/n << endl;
    

    delete []p;
}*/

/*

//문자형 정수 문제\
피연산자는 부적절한 타입이 아니어야한다. 아래 코드 결과는?
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
}//4개다 출력됨.


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
//결과 \
맥 3 3 3 6\
윈도우 3 3 0 9

*/
/*

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글안됨) " << endl;
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
// 4장 문자열에서 문자 찾아서 바꾸기예제
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "여러줄 입력해라. 입력 끝은 &문자." << endl;
    getline(cin, s, '&');// 빈칸을 포함하여 입력받기
    cin.ignore(); // & 뒤에 따라오는 enter키를 제거하기 위한 코드

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
//주소에 의한 호출 예제
#include <iostream>
using namespace std;

void swap(int* a, int* b) //포인터 매개변수 a,b가 swap()의 스택에 생성
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
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius) {
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}
void increase(Circle *p) { //main함수의 waffle이 그대로 c에 복사됨.
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

//C++ 예제 5-3\
기본 타입 변수에 대한 참조

#include <iostream>
using namespace std;

int main() {
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i = 1;
    int n = 2;
    int &refn = n; // int &refn = 20 이런식으로 안됨.
    n = 4;
    refn++; // refn = 5, n=5
    cout << i << '\t' << n << '\t' << refn << endl;
    
    refn = i;
    refn++;
    cout << i << '\t' << n << '\t' << refn << endl;

    int* p = &refn; //p는 refn의 주소를 가짐. p 는 n의주소
    *p = 20; // refn = 20 , n=20
    cout << i << '\t' << n << '\t' << refn << endl;
}

*/


//예제 5-4
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
    cout << " 정수 값으로 반지름을 입력하세요 >> ";
    cin >> r;
    c.setRadius(r);
}
int main() {
    Circle donut;
    readRadius(donut);
    cout << " donut 의 면적 = " << donut.getArea() << endl;
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
    Person(int id, const char* name); //복사 생성자 선언
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
    cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << endl;
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
    cout << " dauther 객체 생성 직후 ---- " << endl;
    father.show();
    dauther.show();

    dauther.changeName("Grace");
    cout << " dauther 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    dauther.show();

    return 0;
}





















