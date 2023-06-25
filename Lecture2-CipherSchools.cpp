//code 1.
#include<iostream>
using namespace std;
int sum(int a, int b){
	return a+b;
}
int main(){

	cout<<sum(2, 30);
	return 0;
}

//code 2.
#include<iostream>
using namespace std;
int sum(int a, int b=0){
	return a+b;
}
int main(){

	cout<<sum(2);
	return 0;
}

//function overloading

#include<iostream>
using namespace std;
int maxi(int n1, int n2){
	if(n1>n2){
		return n1;
	}
	return n2;
}
int maxi(int n1, int n2, int n3){
	if(n1>n2){
		if(n1>n3){
			return n1;
		}
		else{
			return n3;
		}
	}
	else{
		if(n2>n3){
			return n2;
		}
		else{
			return n3;
		}
	}
}
int maxi(int n1, int n2, int n3, int n4){
	int a = maxi(n1, n2, n3);
	return maxi(a, n4);
}
int main(){

	cout<<maxi(2, 5);
	cout<<maxi(2, 5, 3);
	cout<<maxi(2, 5, 3, 5);
	return 0;
}

//increment

//1.pass by value
#include<iostream>
using namespace std;
void increment(int a){
	a++;
	return ;
}
int main(){
	int i= 11;
	increment(i);
	cout<<i<<endl;
	return 0;
}

//2. pass by pointer
#include<iostream>
using namespace std;
void increment(int*a){
	(*a)++;
	return ;
}
int main(){
	int i= 11;
	increment(&i);
	cout<<i<<endl;
	return 0;
}

//3.
#include<iostream>
using namespace std;
void increment(int&a){
	a++;
	return ;
}
int main(){
	int i= 11;
	increment(i);
	cout<<i<<endl;
	return 0;
}

//4.
#include<iostream>
using namespace std;
void increment(int&a){
	a++;
	return ;
}
int main(){
	int i= 11;
	int j = i;
	j++;
	cout<<i<<endl;
	return 0;
}