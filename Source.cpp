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
 cout << "������� ������ ����� �����: " << endl;
 cin >> x;
 cout << "������� ������ ����� �����: " << endl;
 cin >> y;
 cout << "����� �������� ���������� ��� �������? (+ - * / ! ^)" << endl;
 cin >> op;

 std::function<int(int, int)> operation = stepen;  //��� ��������� �� �������, ����� ����������� ����� ��� �������������

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
	 cout << "�� ���� ������ ������!" << endl; 
 break;
 case '!': 
 cout << x << "!" << " = " << factor(x) << endl;
 cout << y << "!" << " = " << factor(y) << endl;
 break; 
 case '^': 
	cout << x << "^" << y << " = " << operation(x, y) << endl;
 break;
 default: 
	 cout << "����� �������� ���" << endl;
 } 
 
 cout << "��� ���-�� ��������? y/n" << endl;
 char ot;
 cin >> ot;
 if (ot == 'n')
	 return 0;

 }
 return 0;
 }