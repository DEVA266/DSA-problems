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
void reverse_number(){
    /* link : https://www.geeksforgeeks.org/problems/reverse-digit0316/1 */
    int r=0,num=0;
        int temp=n;
        while(temp>0){
            r=temp%10;
            num=(num*10)+r;
            temp/=10;
        }
        return num;
}
void palindrome(){
    // link : https://www.geeksforgeeks.org/problems/palindrome0746/1 
    int r=0,num=0;
        int temp=n;
        while(temp>0){
            r=temp%10;
            num=(num*10)+r;
            temp/=10;
        }
        if(num==n) return true;
        else return false;
    
    // link : https://www.naukri.com/code360/problems/palindrome-number_624662 
    int r=0,num=0;
    int temp = n;
    while(temp!=0){
        r=temp%10;
        num=(num*10)+r;
        temp/=10;
        }
    if(num==n) return true;
    else return false;
}
void armstrong(){
    int n,rem=0,num=0;
    cin >> n;
    int temp = n;
    while(temp!=0){
        rem=temp%10;
        num += rem*rem*rem;
        temp/=10;
    }
    if(num==n) return "The given number is Armstrong number !";
    else return "The given number is not an Armstrong number !";
}
void divisor(){
    // link : https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1
    int n ;
    cout << "Enter the number to find all of its divisor";
    cin >> n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout << i << " ";
    }
}
void print_divisor(){
    int n; 
    cout << "Enter a number to find all of its divisor";
    cin >> n;
    vector<int> v;
    // instead of i*i<=n we can use i<=sqrt(n) but the first one takes less time
    for(int i=1;i*i<=n;i++){
        if(n%i==0) {
            v.emplace_back(i);
            if(n/i != i) v.emplace_back(n/i);
        }
    }
    // sort vector
    sort(v.begin(),v.end());
    cout << "The Divisor of the given numbers is : ";
    for(auto i : v) cout << i << " "; 
}
void prime(){
    // link : https://www.geeksforgeeks.org/problems/prime-number2314/1?page=1&difficulty=Basic&sortBy=submissions

    class Solution {
        public:
          bool isPrime(int n) {
              // code here
              for(int i=2;i<=n/2;i++){
                  if(n%i==0)
                  return false;
              }
              return true;
          }
      };

    // method 2
    int n;
    cout << "Enter the number to check prime or not";
    cin >> n;
    int cmt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cmt++;
            if(n/i != i) cmt++ ;
        }
    }
    if(cmt==2) return true;
    else return false;
}
int main(){

}