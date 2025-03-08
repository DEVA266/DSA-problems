// 
#include<bits/stdc++.h>
using namespace std;

void pairs(){
    // syntax for declaring pair type
    // pair is also an data type
    pair<int , int > p = {1,2};
    cout << p.first << " ";
    // the above line print the first element in the pair
    /* pair contains only two elements , to make the pair to use above two elements we can use nested pair for the as a single pair
    as pair is also an data type we can able to use it to create an array */
    pair<int, pair<float,float> > nest = {1, {4.3,4.6}};
    cout << nest.first ; // 1
    cout << nest.second.first ; // 4.3

    pair<int,int> arr[] = { {1,2} , {3,4} , {5,6} };
    cout << arr[1].second ; // 4
}

void vectors(){
    // the vector is similar to the array , but we can able to modified the size dynamically in the vector
    /* syntax : vector< datatype > variable_name ;*/
    vector<int> vec;
    
    vec.push_back(5);
    vec.emplace_back(10);
    // the both push back and emplace back add the value to the vector but emplace directly added with creating an empty variable like push back , so using emplace back can reduce ur time very significantly

    vector<int> ve(5,10); // it creates a 5 vectors_value with 10 as an value to it {10,10,10,10,10}
    vector<int> v(3); // {0,0,0}
    cout << ve[2] ; // 10

    // vectors iterator is same like the pointers,this is usefull to transverse towards the vectors
    vector<int>::iterator i = v.begin(); 
    // the represent to the first value address 
    i++;
    cout << *(i) ;

    vector<int>::iterator end = v.end();
    // this begin from the last and after element which is nothing 
    // to print the last element
    end--;
    cout << *(end) ; // prints the last element in the vector
    cout << v.back() ; // prints the last element in the vector

    // deletion
    v.erase(v.begin()+2);
    v.erase(v.begin(), v.begin()+2) ;
    /* in the above line the series of the value from start to end is deleted 
    the end is always an n-1 so please note than the end value given in the code is actually 1+ from the current value
    */

    // insertion in vector
    vector<int> v ; // {100,200,300,400,500}
    v.insert(v.begin(),50); // {50,100,200,300,400,500}
    v.insert(v.begin()+2,25) ; //{50,100,25,25,200,300,400,500}
    vector<int> cut(3,50); // {50,50,50}
    v.insert(v.begin(),cut.begin(),cut.end()); // {50,50,50,50,100,25,25,200,300,400,500}

    v.pop_back(); // delete the last element in the vector
    v.swap(copy); // swaping both
    v.clear(); // delete eveything
    v.empty(); // stores nothing literall null

}

void auto(){
    // printing elements of the vector
    vector<int> v(10);
    size = v.size();
    for(int i=0;i<size;i++){
        cout << v[i] << " " ;
    }
    // or another way
    for( vector<int>::iterator vec = v.begin(); vec != v.end(); vec++ ){
        cout << *(vec) << " ";
    }
    // or
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " " ;
    }
    
    for(auto it:v){
        cout << it << " ";
    }
    // it prints the entire vector without any iteration because auto automatically assign the datatype to the assign variable.

}
void list(){
    list<int> li;
    li.push_back(5); // {5}
    li.emplace_back(3); //{5,4}
    // we can also do frontend operations in list
    li.push_front(1); // {1,5,4}
    li.emplace_front(2); // {2,1,5,4}
}

void explaindeque(){
    deque<int> li;
    li.push_back(5); // {5}
    li.emplace_back(3); //{5,4}
    // we can also do frontend operations in list
    li.push_front(1); // {1,5,4}
    li.emplace_front(2); // {2,1,5,4}
}

int main(){
    int n;
    vector();
}