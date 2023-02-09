#include <iostream>
#include<iomanip>
#include<functional>
#include "Header.h"
 using namespace std;
  

 int main() 
 {
 setlocale(LC_ALL, "");
 while (true)
 { 
 int x,y;
 char op;
 cout << "Введите первое целое число: " << endl;
 cin >> x;
 cout << "Введите второе целое число: " << endl;
 cin >> y;
 cout << "Какую операцию произвести над числами? (+ - * / ! ^)" << endl;
 cin >> op;

 std::function<int(int, int)> operation = stepen;  //это указатель на функцию, можно подставлять любую при необходимости

 switch (op) 
 { 
 case '+': 
	 cout << x << " + " << y << " = " << x + y << endl;
 break;
 case '-': 
	cout << x << " - " << y << " = " << x - y << endl;
 break;
 case '*': 
	cout << x << " * " << y <<" = "<< x * y << endl;
 break;
 case '/':
	 if (x > 0) cout << x << " / " << y <<" = "<< setprecision(3)<<((double)x / y) << endl;
	 else
	 cout << "На ноль делить нельзя!" << endl; 
 break;
 case '!': 
 cout << x << "!" << " = " << factor(x) << endl;
 cout << y << "!" << " = " << factor(y) << endl;
 break; 
 case '^': 
	cout << x << "^" << y << " = " << operation(x, y) << endl;
 break;
 default: 
	 cout << "Такой операции нет" << endl;
 } 
 
 cout << "Еще что-то вычислим? y/n" << endl;
 char ot;
 cin >> ot;
 if (ot == 'n')
	 return 0;

 }
 return 0;
 }