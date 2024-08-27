#include <iostream>
using namespace std;

int main (){
int num1;
cout << " select first number\n";
cin >> num1;
int num2;
cout << " select second number\n";
cin >> num2;
int opt;
cout << " select operation\n [1] = +\n [2] = -\n [3] = *\n [4] =/\n";
cin >> opt;



switch(opt){
    case 1: cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; break;
    case 2: cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; break;
    case 3: cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; break;
    case 4: cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; break;
    defualt: cout << " wrong value ";
}


return 0;
}
