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
    v.insert(v.begin()+2,2,25) ; //{50,100,25,25,200,300,400,500}
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
    li.emplace_back(3); //{5,3}
    // we can also do frontend operations in list
    li.push_front(1); // {1,5,3}
    li.emplace_front(2); // {2,1,5,3}
}

void explaindeque(){
    deque<int> li;
    li.push_back(5); // {5}
    li.emplace_back(4); //{5,4}
    // we can also do frontend operations in list
    li.push_front(1); // {1,5,4}
    li.emplace_front(2); // {2,1,5,4}
}
void explainstack(){
    stack<int> s;
    s.push(1); // {1}
    s.push(2); // {2,1}
    s.emplace(6); // {6,2,1}
    s.emplace(1); // {1,6,2,1}
    // in stack it is called as last in first out method,the element that enters the stack last is the elemenet that gets out first
    // random acces in stack is not possible
    cout << s.top(); // 1
    cout << s.pop(); // {6,2,1}
    cout << s.top(); // 6

}

void explainqueue(){
    queue<int> q; // first in first out like the queue concept in everywhere
    q.push(2); // {2}
    q.push(3); // {2,3}
    q.push(6); // {2,3,6}
    cout << q.front(); // 2
    cout << q.back(); // 6
    cout << q.pop(); // {3,6}
    cout << q.front(); // 3
}

void explainpriority(){
    priority_queue<int> p; // similar to the queue but it stores the largest element (most weightage) at the top of the queue
    p.push(3); // {3}
    p.push(2); //{3,2}
    p.push(8); // {8,3,2}
    cout << p.top(); // 8
    cout << p.pop(); // {3,2}
    cout << p.top(); // 3
    // the above mentioned priority stores the max at the top called as max heap

    // the code for min heap
    priority_queue<int, vector<int>, greater<int> > pm;
    pm.push(3); // {3}
    pm.push(7); // {3,7}
}

void explainset(){
    set<int> s;
    s.inser(1); // {1}
    s.insert(6); // {1,6}
    s.insert(3); // {1,3,6}
    s.insert(6); // {1,3,6}
    // every set elements are unique no repeated values
    // elements in the set are sorted in accending order

    auto it = s.find(3); // it store the address of the value 3 in the set
    auto it = s.find(8); // the element is not stored in the set so it return the s.end() value , which means the value right after the last value in the set

    cout << s.find(3); // if the element prsent in the set it return true , if not false
    s.erase(6); // {1,3}

    // multi set is same as the one in the set but it also store the duplicates also 
    multiset<int> ms;
}

void map(){
    map<int , int > map;
    map<int, pair<int,int> > mpp;
    map<pair<int,int>,int> mpp;
    // map stores the value in terms of the key , the first elemenet is consider as the key and the second elemenet is consider as the value
    // the key in the map is unique and present in the sorted order
    m[1] = 2; // {1,2}
    m.insert(13,8); // { {1,2}, {13,8}}
    m.emplace(2,6); // { {1,2}, {2,6}, {13,8}}
    // to print the value in the map
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }   
}

// sort and pair in the descending order
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    else return false;
    if(p1.first > p2.first) return true;
    else return false;
}

void sort(){
    // to sort an array
    sort(a,a+n); // it sorts the given array a , n is the total size of the array
    // to sort an pair , where by taking the second elements , if the second element is same then sort the first element based on the descending order
    sort(a,a+n,comp) ; // before sort {{3,2}, {2,1}, {4,1}} , after sorting {{4,1}, {2,1}, {3,2}}
}

int main(){
    int n;
    vector();
}
