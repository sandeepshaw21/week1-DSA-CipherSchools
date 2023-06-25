
//pointers
//1.
#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int*p = &a;
	
	cout<<*(&a)<<endl;
	cout<<*p<<endl;
	return 0;
} 

//2.
#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int*p = &a;
	cout<<sizeof(p)<<endl;
	return 0;
}

//3.
#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int*p = &a;
	
	char ch = 'a';
	char* pch = &ch;
	
	if(sizeof(ch)== sizeof(a)){
		cout<<"hey"<<endl;
	}
	else{
		cout<<"hii"<<endl;
	}
	return 0;
}
