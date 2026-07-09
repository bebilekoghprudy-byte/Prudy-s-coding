#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
  int num1, num2, result;
  char op;
  string name;
  cout<< "enter your name:" <<endl;
  cin>> name;
  cout<< "choose an op (+,-,*,/):" <<endl;
  cin>> op;
     cout<< "enter your first number:" <<endl;
     cin>> num1;
     cout<< "enter your second number:" <<endl;
     cin>> num2;
     if (op=='+') {
     result = num1 + num2;
     cout << result;
     }
     else if (op== '-') {
     
    result = num1 - num2;
    cout<<result;
     }
     else if (op== '*') {
     result = num1 * num2;
     cout<<result;
     }
     else if(op== '/') {
     result = num1 / num2;
     cout<<result;
     }
     else {
     cout<< "you cannot divide by zero:" <<endl;
     }cout << "The result of " << num1 << " " << op << " " << num2 << " = " << result << endl;
     cout<<result;
      return 0;}