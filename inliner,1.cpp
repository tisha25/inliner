#include<iostream>
 using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int pointer_arg(int a,int b,
         int (*function)(int,int)){
         	return function(a,b);
		 }
		 int main(){
		 	int a,b;
		 cout<<"enter first value:";
		 cin>>a;
		 cout<<"enter second value:";
		 cin>>b;
		 cout<<"sum of both numbers:";
		 cout<<pointer_arg(a,b,&sum)<<endl;
		 return 0;
	}
