#include<iostream>

using namespace std;

int main(){
	int a,i;
	cout<<"Enter a number to check its prime or not ";
	cin>>a;
	for(i=1;i<a/2;i++)
	{
		if(a%i==0){
			cout<<a<<" is not a prime number";
			break;
		}
		else
		{
			cout<<a<<" is a prime number";
			break;
		}
	}
}
