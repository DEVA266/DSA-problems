#include<bits/stdc++.h>
using namespace std;
void count_digits(){
    /* link : https://www.geeksforgeeks.org/problems/count-digits5716/1 */
    int r=0;
        int temp = n;
        int digit = 0;
        while(n>0){
            r = n%10;
            if(r!=0 && temp%r==0) digit++ ;
            n = n/10;
        }
        return digit;
}


int main(){

}