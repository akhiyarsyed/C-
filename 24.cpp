#include<iostream>
using namespace std;
int main(){
	int n=18,rem,sum=0;
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	if(n%sum==0){
		cout<<"harshad number";
	}
	else{
		cout<<"not a harshad number";
	}
	return 0;
}