#include<iostream>
#include<stdio.h>
using std::cout;
using std::cin;
int main(){
	int a[20], temp, n;
	std::cout<<"how many numbers will you be entering?";
 	std::cin>>n;
	for(int i=0;i<n;++i){
	std::cin>>a[i];
	}
 	std::cout<<"starting sorting!";
		for(int i=0;i<n;++i){
		 	for(int i=0;i<n;++i){
				for(int j=i+1;j<n;++j){
				if(a[i]>a[j]){
				a[i]=temp;
				a[i]=a[j];
				a[j]=temp;
				}else{
				++i;
				}
				}
			}
		}	
for(int i=0;i<n;++i){
	std::cout<<a[i]<<" ";
}
return 0;
}
