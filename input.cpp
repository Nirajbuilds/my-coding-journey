#include <iostream>
using namespace std;
int main () {
string name; // iski wajha se hum alphabets youse kar sakte hai.
int age; // aur isse number.
 
cout << "Enter your name : " ;
getline (cin, name);
cout << "enter your age : ";
cin >> age;
cout << "hello " << name << ",you are " << age << " years old.";


}
