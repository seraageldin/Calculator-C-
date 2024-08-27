#include <iostream>
using namespace std;

int main (){
                cout << " =========================================\n";
                cout << " this is a simple calculator app\n";
                cout << " =========================================\n";
                cout << " choose first number\n";
                int first;
                cin >> first;
                cout << " Selct operator * / + - \n";
                string operator;
                cin >> operator;
                cout << " select second number \n";
                int second;
                cin >> second;

                if (operat == "/"){cout << " the answer is " << first / second << endl;}
                else if ( operator == "*"){ cout << " the answer is " << first * second << endl;}
                else if ( operator == "+"){ cout << " the answer is "<< first + second << endl;}
                else if ( operator == "-"){ cout << " the answer is "<< first - second << endl;}
                else { cout << " you entered a wrong value";}
return 0;}
