#include <iostream>
using namespace std;
int main() {

int n, sum =0;
cout << "Enter number :";
cin >> n;
while(n > 0){
int lastdigit = n%10;
sum  += lastdigit;
n /= 10;

}

cout << "sum = " << sum << "\n";


  return 0;
}
