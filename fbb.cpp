#include<iostream>
using std::cout;
using std::cin;
int main(){
     
     for(int i=1;i<=100;i++){

         //number divisible by 3 and 5 would be divisible by 15
        if(i%15 == 0 ){
            std::cout<<"fizzbuzz";
            std::cout<<" \n";
        }
        else if(i%3==0){
            std::cout<<"fizz";
            std::cout<<" \n";
        }
        else if(i%5==0){
            std::cout<<"buzz";
            std::cout<<" \n";
        }
        else{
            std::cout<<i<<"\n";
        }

    }
    return 0;
}