#include <iostream>
#include <string>

using namespace std;

class student {
  int rollNo;
  public:
  string name;
  int age;

  void display(){
    cout << name << " is " << age << " years old";
  }
};

int main(){
  student s1;
  s1.name = "Sachin";
  s1.age = 21;

  s1.display();

  return 0;
}