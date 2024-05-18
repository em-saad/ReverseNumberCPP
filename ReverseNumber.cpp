#include<iostream>
using namespace std;
int main(){
	int num;
	int rem;
	int rev=0;
	cout<<"Enter Number:";
	cin>>num;
	cout<<"Number Before Reverse:"<<num<<endl;
	while(num!=0){
		rem=num%10;//Separating the last Digit
		rev=(rev*10) +rem;//placing Separated Number As 1st Digit
		num=num/10;//Removing Last Digit From Actual Number
	}
	
	cout<<"Number After Reverse:"<<rev;
	
}