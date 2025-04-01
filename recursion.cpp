#include<bits/stdc++.h>
using namespace std ;

void N-numbers(){
    // link : https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-1-to-n-without-using-loops

    int n;
    cin >> "enter the number : " >> n ;
    void printNos(int n) {
        // Your code here
         if(n > 0 ) {
            printNos(n - 1);
            cout << n <<" ";}
    }
    printNos(n);
}

void print_name(){
    // link : https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times
    int N ;
    cin >> N ;
    void printGfg(int N) {
        // Code here
        if(N>0){
            cout << "GFG" << " " ;
            printGfg(N-1);
        }
    }
    printGfg(N);
}

void sum_numbers(){
    // link : https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
    int sum=0;
    int sumOfSeries(int n) {
        // code here
        if(n>0){
            sum += n*n*n ;
            return sumOfSeries(n-1);
        }
    return sum ;
    }

    // method 2
    int sumOfSeries(int n){
        if (n==0){
            return 0;
        }
        return (n*n*n)+sumOfSeries(n-1);
    }
}

void sum(){
    // returning sum of n numbers in a parameterized way
    int sub(n,sum){
        if(n<0){
            cout << sum ;
            return ;
        }
        sub(n-1,sum+n);
    }

    // the values to be passed for calling the function
    /* 
    int sum = 0 ;
    int n ;
    cin >> "enter the number " >> n ;
    cout << "to find sum of n numbers ";
    sub(n,sum) ;
    */
}

void fact(){
    int factorial(n){
        if(n==0 || n==1 ) return 1 ;
        else return n*factorial(n-1);
    }
}

int main (){

}

