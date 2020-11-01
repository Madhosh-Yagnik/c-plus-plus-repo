#include<iostream>
#include<stdio.h>
using std::cout;
using std::cin;
int main(){
	long int n, a[100], temp, uselessVar;
	std::cout<<"enter number of elements";
	std::cin>>n;
	std::cout<<"enter the elements";
	for(int i=0; i<n;++i){
	std::cin>>a[i];
	}
	for(int i=0;i<n;++i){
		for(int j=i+1; j<n; ++j){
		if(a[i]>a[j]){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}
	}
	std::cout<<"type and enter 1 to see the sorted list of numbers";
	std::cin>>uselessVar;
	if(uselessVar==1){
	for(int i=0;i<n;++i){
	std::cout<<a[i]<<" ";
	}
	}else{
	return 1;
	}
	return 0;
}
