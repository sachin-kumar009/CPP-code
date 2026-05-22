#include <iostream>
using namespace std;

// Writing a program for a simple calculator using C++
// int main (){
//   int menu ;
//   cout << "Select the task to perform !!\n";
//   cout << "1)Sum\n2)Difference\n3)Division\n4)Multipication\n";
//   cout << "Enter the number from menu : ";
//   cin >> menu ;
//   if (menu==1) {
//     int a,b;
//     cout << "Enter the first number : ";
//     cin >> a;
//     cout << "Enter the second number : ";
//     cin >> b;
//     int sum = a+b;
//     cout << "sum is : " << sum ;
//   }else if (menu==2){
//     int a,b;
//     cout << "Enter the first number : ";
//     cin >> a;
//     cout << "Enter second number : ";
//     cin >> b ;
//     int diff = a-b;
//     cout << "The differnce is " << diff ;
//   }else if (menu==3) {
//     int a,b;
//     cout << "Enter first number : ";
//     cin >> a;
//     cout << "Enter second number : ";
//     cin >> b;
//     int prod = a*b;
//     cout << "The product is " << prod ;
//   }else if (menu==4) {
//     int a,b;
//     cout << "Enter the first number : ";
//     cin >> a;
//     cout << "Enter the second number : ";
//     cin >> b;
//     int div = a/b;
//     cout << "The division is " << div ;
//   } else {
//     cout << "Choose correct number from the menu !!";
//   }
//   return 0 ;
// }


// loop concept 

// int main (){
//   int n = 10;
//   int sum = 0;
//   int i = 1;
//   while ( i<=n){
//     if (i%2!=0){
//       sum+=i; 
//     }
//      i++;
//   }
//   cout << sum;
//   return 0 ;
// }

// homework problem sum of all numbers from 1 to N which are divisible by 3

// int main (){
//   int n ;
//   int sum = 0;
//   cout << "Enter the number to find the sum : ";
//   cin >> n ;
//   for(int i=1;i<=n;i++){
//     if (i%3==0){
//       sum+=i;
//     }
//   }
//   cout << sum << "\n" ;

//   return 0;
// }

// code for print factorial of a number N

int main (){
  int n;
  int fact=1 ;
  cout << "Enter the number to find factorial : ";
  cin >> n ;
  for (int i=1;i<=n;i++){ 
    fact*=i;
  }
  cout << fact ;
  return 0;
}