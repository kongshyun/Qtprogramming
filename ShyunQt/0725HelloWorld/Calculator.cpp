#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator :: run(){
    cout << "Input two number >>";
    int a,b;
    cin >>a >>b; //정수 두개 입력
    Adder adder(a,b); //
    cout << adder.process();
}
