#include<iostream>
#include<string>
using namespace std;
 
 void myfunction(string country = "India") {
  cout<<country <<endl;
 } 

 int main() {
   myfunction();
  myfunction("America");
  myfunction("Swedan");
   return 0;
 }