#include<iostream>
using namespace std;

void comparision(int a, int b){
	if (a > b)
  {
    cout << "a is greater than b" << endl;
  }
  else
  {
    cout << "b is greater than a" << endl;
  }
}

int main(){
	int a;
  int b;
	cout << "enter the values of a abd b: ";
  cin>>a>>b;
	cout<<"Comparision btw two numbers: ";
  comparision(a,b);
	return 0;
}
