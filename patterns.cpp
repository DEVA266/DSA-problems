#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
  /* link : https://www.naukri.com/code360/problems/n-forest_6570177 */
  for ( int i = 0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
void pattern2(int n){
  /* link : https://www.naukri.com/code360/problems/n-2-forest_6570178 */
  for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			cout << "* ";
		}
		cout << endl;
	}
}
void pattern3(int n){
 /* link : https://www.naukri.com/code360/problems/n-triangles_6573689 */
 for ( int i = 1;i<=n;i++){
  for ( int j = 1;j<=i;j++){
    cout << j << " ";
  }
  cout << endl;
}
}
void pattern4(int n){
  /* link : https://www.naukri.com/code360/problems/triangle_6573690 */
  for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << i << " ";
		}
		cout << endl;
	}
}
void pattern5(int n){
  /* link : https://www.naukri.com/code360/problems/seeding_6581892 */
  for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout << "* ";
		}
		cout << endl;
	}
}
void pattern6(int n){
  /* link : https://www.naukri.com/code360/problems/reverse-number-triangle_6581889 */
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern7(int n){

  /* link : https://www.naukri.com/code360/problems/star-triangle_6573671 
  */
  for(int i=1;i<=n;i++){
    //space
    for(int j=0;j<n-i;j++){
        cout << " ";
    }
    //star
    for(int j=0;j<2*i-1;j++){
        cout << "*";
    }
    //space
    for(int j=0;j<n-i;j++){
        cout << " ";
    }
    cout << endl;
}
}
void pattern8(int n){
  /* link : https://www.naukri.com/code360/problems/reverse-star-triangle_6573685 */
  //space
  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<i;j++){
        cout << " ";
    }
    //star
    for(int j=0;j<2*n-(2*i+1);j++){
        cout << "*";
    }
    //space
    for(int j=0;j<i;j++){
        cout << " ";
    }
    cout << endl;
}
}
void pattern9(int n){
  /* link : https://www.naukri.com/code360/problems/star-diamond_6573686 */
  // Write your code here.
  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i-1;j++){
        cout << " ";
    }
     // stars
    for(int j=0;j<2*i+1;j++){
        cout << "*";
    }
    // space
    for(int j=0;j<n-i-1;j++){
        cout << " ";
    }
    cout << endl;
}
  for(int i=0;i<n;i++){
      // space
      for(int j=0;j<i;j++){
          cout << " ";
      }
      // stars
      for(int j=0;j<(2*n)-(2*i+1);j++){
          cout << "*";
      }
      //space
      for(int j=0;j<i;j++){
          cout << " ";
      }
      cout << endl;
  }
}
void pattern10(int n){
  /* link : https://www.naukri.com/code360/problems/rotated-triangle_6573688 */
  for(int i=1;i<=2*n-1;i++){
    int stars = i;
    if(i>n) stars = 2*n-i;
    for(int j=1;j<=stars;j++){
        cout << "*";
    }
    cout << endl;
}
}
void pattern11(int n){
  /* link : https://www.naukri.com/code360/problems/binary-number-triangle_6581890 */
  int s=1;
    for(int i=0;i<n;i++){
        if(i%2==0) s=1;
        else s=0;
        for(int j=0;j<=i;j++){
            cout << s << " ";
            s=1-s;
        }
        cout << endl;
    }
}
void pattern12(int n){
  /* link : https://www.naukri.com/code360/problems/number-crown_6581894 */
  // Write your code here.
  int space=2*(n-1);
  for (int i=1;i<=n;i++){
      
      //numbers
      for (int j=1;j<=i;j++){
          cout << j << " ";
      }

      //space
      for (int j=1;j<=space;j++){
          cout << " ";
      }

      //numbers
      for (int j=i;j>=1;j--){
          cout << j << " ";
      }
      cout << endl;
      space -=2;
  }
}
void pattern13(int n){
  /* link : https://www.naukri.com/code360/problems/increasing-number-triangle_6581893 */
  int num=1;
  for (int i=1;i<=n;i++){
      for (int j=1;j<=i;j++){
          cout << num << " ";
          num = num + 1;
      }
      cout << endl;
  }
}
void pattern14(int n){
  /* link :  https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897 */
  for (int i=0;i<n;i++){
    for ( char ch='A';ch<='A' + i;ch++){
        cout << ch << " ";
    }
    cout << endl;    
}
}
void pattern15(int n){
  /* link : https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906 */
  for (int i=1;i<=n;i++){
    for (char ch = 'A';ch<= 'A' +(n-i);ch++){
        cout << ch << " ";
    }
    cout << endl;
}
}
void pattern16(int n){
  /* link : https://www.naukri.com/code360/problems/alpha-ramp_6581888 */
  for (int i=1;i<=n;i++){
    char ch = 'A' + (i - 1);
    for (int j=1;j<=i;j++){
        cout << ch << " ";
    }
    cout << endl;
    
}
}
void pattern17(int n){
  /* link : https://www.naukri.com/code360/problems/alpha-hill_6581921 */
  // Write your code here.
  for ( int i=0;i<n;i++){
    //space
   for(int j=0;j<n-i-1;j++){
       cout << " ";
   }
   // ch
   char ch='A';
   int breakpoint = (2*i+1)/2 ;
   for(int j=1;j<=2*i+1;j++){
       cout << ch << " ";
       if (j <= breakpoint) ch++;
       else ch--;
   }
    //space
   for(int j=0;j<n-i-1;j++){
       cout << " ";
   }
   cout << endl;
}
}
void pattern18(int n){
  /* link : https://www.naukri.com/code360/problems/alpha-triangle_6581429 */
  for (int i =0;i<n;i++){
    for(char cs = ('A' + (n-1)) ; cs <= ('A' + (n-1)) - i ;cs--){
        cout << cs << " ";
    }
    cout << endl;
}
}
void pattern18_2(int n){
 /* link : https://www.naukri.com/code360/problems/alpha-triangle_6581429 */
 //method 2 
 for (int i=0; i<n; i++)
 {
     char ch = 'A' + (n - 1);
     for (int j=0; j<=i; j++)
     {
         cout << ch << " ";
         ch--;
     }
     cout << "\n";
 }
}
void pattern19(int n){
  /* link : https://www.naukri.com/code360/problems/symmetric-void_6581919 */
  // Write your code here.
  int spaces =0;
  for( int i=0;i<n;i++){
      // stars
      for(int j=0;j<n-i;j++){
          cout << "* ";
      }
      
      // spaces
      for(int j=0;j<spaces;j++){
          cout << " ";
      }

      // stars
      for(int j=0;j<n-i;j++){
          cout << "* ";
      }
      spaces +=2;
      cout << endl;
  }
  
  // second half
  int spacess = (2*n)-2;
  for (int i=1;i<=n;i++){
      // stars
      for(int j=1;j<=i;j++){
          cout << "* ";
      }

      // spaces
      for(int j=0;j<spacess;j++){
          cout << " ";
      }

      // stars
      for(int j=1;j<=i;j++){
          cout << "* ";
      }
      spacess -=2;
      cout << endl;
  }
}
void pattern20(int n){
  /* link : https://www.naukri.com/code360/problems/symmetry_6581914 */
  // Write your code here.
  int spaces = (2*n)-2;
  for(int i=1;i<=2*n-1;i++){
      // stars
      int stars = i;
      if(i > n) stars = 2*n-i ;

      for(int j=1;j<=stars;j++){
          cout << "* ";
      }

      // spaces
      for(int j=1;j<=spaces;j++){
          cout << " ";
      }

      //stars
      for(int j=1;j<=stars;j++){
          cout << "* ";
      }
      cout << endl;
      if(i<n) stars -=2;
      else stars +=2;
  }
}
void pattern21(int n){
  /* link : https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920 */
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i == 0 || j == 0 || i == n-1 || j == n-1 ) {
            cout << "*";
    }
    else cout << " ";
    }
    cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern7(n);
}