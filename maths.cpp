#include <bits/stdc++.h>
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

// euclidean algorithm.
// gcd (a,b) = gcd(a-b,b) if(a>b)
// in computational to reduce the time complexity we use
// gcd(a,b) = gcd(a%b,b) if(a>b)

void gcd(){
    // link : https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
    int a,b;
    cin >> "enter a :" >> a;
    cin >> "enter b : " >> b ;
    vector<int> v(2);
    int x=a;
    int y=b;
    while(x>0 && y>0){
        if(x>y) x=x%y;
        else y=y%x;
    }
    if (x==0) v[1] = y;
    else v[1]=x;
    
    int l=(a*b)/v[1];
    v[0]=l;
    
    return v;
}

void problem9(){
    // link : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions

    // to find the missing element from the given array of size n 
    int arr[] ;
    vector<int>&arr;
        long long sum = 0 ;
        long long n = arr.size()+1;
        for(auto num : arr){
            sum += num;
        }
        long long total = (n*(n+1))/2;
        return total - sum ;
}

void problem10(){
    // link : https://www.geeksforgeeks.org/problems/wave-array-1587115621/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
    long long n = arr.size();
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void problem11(){
    // link : https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
    
    // method 1 
    long long size = arr.size();
        int max = arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]>max) max=arr[i];
            else break ;
        }
        return max;

    // method 2 
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];

}
 void problem12(){
    // link : https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1?page=1&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
    // the code exhibits the given time complexity
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        long long size = arr.size();
        vector<int> n ;
        for(int i=0;i<=size-k;i++){
            int max=arr[i];
            for(int j=1;j<k;j++){
                if(arr[i+j]>max) {
                    max = arr[i+j];
                }   
            }
            n.push_back(max);
        }
        return n;
    }
 }



int main(){

}