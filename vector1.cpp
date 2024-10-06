#include<iostream>
#include<vector>
using namespace std;
void explainPair(){

    pair<int, int> pr1  = {2,8};
    cout<< pr1.first<< " "<< pr1.second<< endl;

    pair<int, char>pr2 = {2,'b'};
    cout<<pr2.first<<" "<<pr2.second<<endl;

    pair<pair<int, char>, int>pr3 = {{4,'h'},8};
    cout<< pr3.first.second<<endl;

}

void explainVector(){
    vector<int>vec; //empty container
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    //cout<<vec.size();
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    //iterator
    vector<int>::iterator beginitr = vec.begin(); //returns the pointer to the first element
    vector<int>::iterator enditr = vec.end(); // 1 2 0 :- this iterator will be pointing after 0
    cout<< *beginitr<<endl;
    cout<< *enditr<<endl;

    //auto keyword:- you dont have to specify the dta type
    for(auto i: vec){
        cout<<i<<" ";
        //travelling a vector in the reverse direction:- 

        auto reverseBegin = vec.rbegin();
        auto reverseEnd = vec.rend();
        for(auto i = reverseBegin;i<reverseEnd;i++){
           cout<<*i<<endl; 
        }
    }
}
void explainLists(){
    
}
int main(){
    explainVector();
    return 0;

}