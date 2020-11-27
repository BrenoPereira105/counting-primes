#include<iostream>
#include<stdio.h>
#include<sstream> 

using namespace std;

//this function return 1 if x is prime and 0 otherwise
int is_prime(int x){

    int flag = 1;
    
    for(int i = 2; i < x; i++){
        if(x%i==0)
           flag = 0;
    }
    return flag;
}
//this function returns the total number of primes between 0 and x
int prime_counter(int x){

    int final_result = 0;
    for(int i = 2; i < x ; i++){

        if(is_prime(i) == 1)
            final_result++;
    }
    return final_result;
}
int main(int argc, char ** argv){

    string s = argv[1];
    stringstream pass(s);   
 
    int x = 0; 
   
    pass >> x;
    cout <<"there are " << prime_counter(x) <<" primes between 0 and "<< x <<"\n";
       
    return 0;
}
