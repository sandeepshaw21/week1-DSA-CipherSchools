#include <iostream>
// # include <bits/stdc++.h>
using namespace std ;
int sum(int n1 , int n2){
	return (n1+n2);
}
int sum (int a = 0 ; int b){
	return (a+b);
}
int max(int a , int b ){
	if(a>b){
		return a;
	}
	return b ;
}
int max (int a ,int b ,int c){
	if(a>b){
		if (a > c){
			return a;
		}
		else{
			if (b>c){
				return b;
			}
			return c;
		}
	}
}
int max (int a ,int b,int c, int d){
	int n1 = max(a,b);
	int n2 = max(c,d);
	int n3 = max (n1,n2);
	return n3;
}
void increment(int &a){
	a++;
	return ;
}
int main(){

	int n1,n2 ;
	cin >> n1 >> n2 ;
	cout << sum (n1 , n2)<<endl;
	cout << sum(7)<<endl;
	cout << max(10 , 45)<<endl;
	cout << max (1,2,3)<<endl;
	cout << max (1,3,4,5)<<endl;
	cout << increment(6);
	return 0;
}
