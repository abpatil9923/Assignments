// 1 prime number using loop

#include <iostream>
using namespace std;
static int flag = 0;

int check_P(int n){
	for(int i=2; i<=n/2; i++){
		if(n%i == 0){
			 flag++;	
		}
	}
}
int main(int argc, char** argv) {
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	check_P(num);
	if(flag == 0){
		cout<<"given number is prime"<<endl;		
	}
	else{	
		cout<<"given number is not a prime number"<<endl;		
	}
	return 0;
}


