// VL Strings, arrays and conditionals
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // low level version of random numbers
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 11;
    cout << my_num;
    return 0;
}
