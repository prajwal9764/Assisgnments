#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int num1, i, num, digit, sum, count;

  cout << "Enter range of value : ";
  cin >> num1;

  
  
  
  cout << "Armstrong numbers between 1  to " << num1 << " are: " << endl;
 
  
  for(i = 1; i <= num1; i++) {

   
    count = 0;
         
    num = i;

    while(num > 0) {
      ++count;
      num /= 10;
    }
 
    sum = 0;

    num = i;
        
    while(num > 0) {
      digit = num % 10;
      sum = sum + pow(digit, count);
      num /= 10;
    }

    
    if(sum == i) {
      cout << i << ", ";
    }
  }

  return 0;
}