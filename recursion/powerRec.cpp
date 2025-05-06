#include <iostream>
using namespace std;
int findExpo(int base, int exponential){
 if (exponential == 0) return 1;
 return base * findExpo(base,exponential-1);
}
int main (){
 int base = 2;
 int exponential = 3;

 int result = findExpo(base,exponential);
 cout << base << "^" << exponential << " = " << result << endl;
    return 0;
}
