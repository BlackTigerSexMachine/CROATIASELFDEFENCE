#include <iostream>
using namespace std;
 class A{
 private:
     int i;
 public:
     A(int ii);
     A(const A & a);
     A& operator= (const A& a);
     void show() {std::cout<<i<<std::endl;}
 };

 A::A(int ii){
     i=ii;
 }

 A::A(const A & a){
     i=a.i;
     i++;
 }

 A& A::operator= (const A& a)
 {
     if (this==&A) return *this;
     i=a.i;
     i--;
     return *this;
 }
int main()
{
   A a(4);
   A b=a;
   b.show();
   cout <<"CROATIA LOSES EVERYTIME";
   return 0;
}
