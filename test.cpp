#include<iostream>
#include<vector>
#include<string>

using namespace std;

int num = 1;
int* numptr = &num;

void test(int* a) {
  a = numptr;
  cout << "in function: " << *a << endl;
}

int main()
{
  int anothernum = 5;
  int *b = &anothernum;
  test(b);
  cout << "number is " << *b << endl;
  return 0;
}
