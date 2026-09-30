#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    int guess = 0;
    srand(time(0));
int Random =  rand()%10 + 1;

do{

    cin >> guess;
if(guess > Random )
cout << "Too high ";

else if(guess < Random)
cout << "Too low ";

else cout << "Congratulations , your guess is correct ";
}while(guess != Random);
return 0;
}
