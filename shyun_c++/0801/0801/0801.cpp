
//3���� DAY4 08.01.��

/*
//���� 11-1
#include<iostream>

using namespace std;
int main()
{
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');

	cout.put('C').put('+').put('+').put(' ');

	char str[] = "I love programming";
	cout.write(str, 6);
}*/


/*
//���� 11-2
#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch;
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n')
			break;
	}
}

void get2() {
	cout << "cin.get(char&)�� <Enter>Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while (true)
	{
		cin.get(ch);
		if (cin.eof()) break;
		cout.put(ch);
		if (ch == '\n')
			break;
	}
}

int main()
{
	get1();
	get2();
}*/



/*

//���� 11-4
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char line[80];
	cout << "cin.getline() �Լ��� ������ �н��ϴ�." << endl;
	cout << "exit�� �Է��ϸ� ������ �����ϴ�." << endl;
	int no = 1;
	while (true)
	{
		cout << "���� " << no << " >> ";
		cin.getline(line, 80);
		if (strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";
		cout << line << endl;
		no++;
	}
}*/


/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	int n;

	const char* format = "%d\n";

	printf(format, 123);
	printf("\r%f", 45.6);
	printf("\r%s%r\n", "Hello World", &n);
	printf("Length: %d\n", n);
	return 0;
}

*/

/*
#include <iostream>
using namespace std;
int main()
{
	cout << 30 << endl;
	cout.unsetf(ios::dec);
	cout << 30 << endl;

	cout.setf(ios::showbase);
	cout << 30 << endl;

	cout.setf(ios::uppercase);
	cout << 30 << endl;
	cout.setf(ios::dec | ios::showpoint);
	cout << 23.5 << endl;
	cout.setf(ios::scientific);
	cout << 23.5 << endl;

	cout.setf(ios::showpos);
	cout << 23.5;
}*/


/*


#include <iostream>
using namespace std;
void showWidth() {
	cout.width(10);
	cout << "Hello" << endl;
	cout.width(5);
	cout << 12 << endl;

	cout << '%';
	cout.width(10);
	cout << "korea/" << "Seoul/" << "City" << endl;
}

int main() {

	showWidth();
	cout << endl;

	cout.fill('^');
	showWidth();
	cout << endl;

	cout.precision(5);
	cout << 11. / 3. << endl;
}
*/
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << showbase;

	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	for (int i = 0; i < 50; i += 5) {
		cout << setw(8) << setfill('.') << dec << i;
		cout << setw(10) << setfill(' ') << oct << i;
		cout << setw(10) << setfill(' ') << hex << i << endl;
	}
}
*/

/*
//11-9 ����
#include <iostream>
using namespace std;

class Point {
	int s, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend ostream& operator << (ostream& stream, point a);
};

ostream& operator << (ostream& stream, Point a) {
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}

int main() {
	Point p(3, 4);
	cout << p << endl;

	Point q(1, 100), r(2, 200);
	cout << q << r << endl;
}
*/



/*
#include<iostream>
#include <string>
using namespace std;
class Book {
	string title;
	string press;
	string author;

public:
	Book(string title = ""), string press = "", string author""){
		this->title = titlte;
		this->press = press;
		this->author = author;
	}
	friend ostream operator << (ostream& stream, Book b);


};

ostream& operator << (ostream &stream, Book b) {
	stream << b.title << "," << b.press << "," << b.auther;
	return stream;
}*/
/*
#include <iostream>
using namespace std;
class Point {
	int x, y;
public:

};


*/


/*
//���� 12-1
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char name[10], dept[20];
	int sid;

	cout << "�̸� >>";
	cin >> name;

	cout << "�й� >>";
	cin >> sid;

	cout << "�а� >>";
	cin >> dept;

	ofstream fout("c:\\temp\\student.txt");
	if (!fout) {
		cout << "c:\\temp\\student.txt ������ �� �� ����";
		return 0;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();

}
*/

/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("c:\\temp\\student.txt");
	if (!fin) {
		cout << "������ �� �� ����";
		return 0;
	}

	char name[10], dept[20];
	int sid;

	fin >> name;
	fin >> sid;
	fin >> dept;

	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;

	fin.close();��
}
*/

/*
#include <iostream>
#include <fstream>
using  namespace std;

int main()
{
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		cout << file << "�������" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();
}*/

/*
//���� 12-4

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* firstFile = "c:\\temp\\student.txt";
	const char* secondFile = " c:\\windows\\system.ini";

	fstream fout(firstFile, ios::out | ios::app);
	if (!fout)
	{
		cout << firstFile << "���� ����";
		return 0;
	}

	fstream fin(secondFile, ios::in);
	if (!fin) {
		cout << secondFile << " ���� ����";
		return 0;
	}
	int c;
	while((c=fin.get())!=EOF) {
		fout.put(c);
	}
	fin.close();
	fout.close();
}*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void fileRead(vector < string>& v, ifstream& fin){
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}

}

void search(vector<string>& v, string word) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1)
			cout << v[i] << endl;
	}
}

int main()
{
	vector<string> wordVector;
	ifstream fin("word.txt");
	if (!fin) {
		cout << "word.txt ������ �� �� �����ϴ�" << endl;
		return 0;
	}
	fileRead(wordVector, fin);
	fin.close();

	cout << "words.txt ������ �н��ϴ�." << endl;
	while (true) {
		cout << "�˻��� �ܾ �Է��ϼ��� >>";
		string word;
		getline(cin, word);
		if (word == "exit")
			break;
		search(wordVector, word);
	}
	cout << "���α׷��� �����մϴ�." << endl;
	}
}