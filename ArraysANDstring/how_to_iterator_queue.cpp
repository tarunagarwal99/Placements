#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(4);
    q.push(2);
    q.emplace(5);
    q.back()+=11;   //it indicate the last element

    cout<<q.back()<<endl;   //it print the last element with increament of 11;
    cout<<q.front()<<endl;  //it print the first element that insert
    q.pop();   //it pop the first element that to be inserted
    cout<<q.front()<<endl; //it print element 
    return 0;
}