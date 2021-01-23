// WAP to Check if a Number is Positive or Negative

#include <iostream>
using namespace std;
static int flag = 0;

int main(int argc, char** argv) {
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;

	if(num > 0){
		cout<<"number is positive"<<endl;		
	}
	elseif(num < 0){	
		cout<<"number is negative"<<endl;		
	}
	return 0;
}
