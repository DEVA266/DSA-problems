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

int main (){

}

