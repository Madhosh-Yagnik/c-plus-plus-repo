#include<iostream>
#include<stdio.h>
using std::cout;
using std::cin;

int main(){
        int a[100], temp=0, n;
        std::cout<<"size of array";
        std::cin>>n;
        std::cout<<"enter the elements of the array";
        for(int i=0; i<n;i++){
                std::cin>>a[i];
        }
        std::cout<<"now, sorting the array";
        for(int i=0; i<n;i++){
                for(int j=i+1; j<n ;j++){
                        if(a[i]>a[j]){
                                temp = a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        std::cout<<"printing the values :";
        for(int i=0; i<n ;i++){
                std::cout<<" "<<a[i];
        }

	return 0;
}

