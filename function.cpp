#include <iostream>
using namespace std;
#include <cmath>


// Function to calculate the sum of two integers
int sumOfTwo(int a, int b) {
  int sum  = a + b;
  return sum;
}



// Function to calculate the sum of 1 to n integers
int sumOfN(int n ){
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}


// To calculate the n factorial
int factN(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact*=i;
  }
  return fact;
}



// Function to calculate the sum of digits
int sumOfDigits(int num){
  int digiSum = 0;
  while(num>0){
    int lastDigi = num%10;
    num/=10;
    digiSum+=lastDigi;
  }
  return digiSum;
}



// Function to calculate the nCr binomial coefficient for n&r
int nCr(int n , int r){
  int fact_n = factN(n);
  int fact_r = factN(r);
  int fact_nmr = factN(n-r);


  return fact_n/(fact_r*fact_nmr);

}

// Homework problem

// WAF to check if a number is prime or not 
int isPrime(int n){

  if ( n < 2) {
    return 0;
  }
  for(int i=2; i<= sqrt(n) ; i++){
    if (n%i == 0 ) {
      return 0;
    }
  }
  return 1;
}

// WAF to print all prime number from 2 to n
void printAllPrimes(int n){
  for(int i=2; i<=n ; i++){
    if (isPrime(i)){
      cout << i << " " ;
    }
  }
  cout << endl;
}


// WAF to print Nth fibonacci number
int fibonacci(int n){
  if (n <= 1){
    return n;
  }
  int a = 0, b = 1, c;
  for(int i = 2; i <= n; i++){
    c = a+b;
    a = b;
    b = c;
  }
  return c;
}



int main (){
  int n = 10;
  isPrime(n) ? cout << n << " is a prime number " : cout << n << " is not a prime number ";
  cout << endl;

  printAllPrimes(n);
  cout << "The " << n << "th Fibonacci number is : " << fibonacci(n) << endl;
   return 0;
}