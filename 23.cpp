#include<iostream>
using namespace std;
int main(){
	int n=153,rem,result=0;
	int temp=n;
	while(n!=0){
		rem=n%10;
		result=result+(rem*rem*rem);
		n=n/10;
	}
	cout<<(temp==result? "armstrong ":"not an armstrong number");
	return 0;
}