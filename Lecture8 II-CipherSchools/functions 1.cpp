#include<iostream>
using namespace std;


//void printstuff(){
//	cout<<"writing my first function";
//}

int sumOfTwoNumber(int a,int b){
	return a+b;
}

int main(){
//	printstuff();
    int a,b;
    a=3,b=5;
    int ans=sumOfTwoNumber(a,b);
    cout<<ans;
	return 0;
}
