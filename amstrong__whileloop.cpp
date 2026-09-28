#include <iostream>
#include <cmath>
using namespace std;
int main () {

int n, c = 0;
int sum = 0;
cout << " Enter number :";
cin >> n;
int copy = n;
while(n > 0) {
  int lastdigit = n%10;
  c++;
 
  n /= 10;

}
n = copy;
while( n > 0){
   int lastdigit = n%10;
    sum += pow(lastdigit, c);
    n /= 10;

}
n = copy;
cout <<(( sum == copy ) ? " amstrong number" : "not a amstrong number");

}
