// Queue using STL

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);
    cout<< " size of queue is :"<< q.size()<< endl;

    q.pop();
    q.pop();

    cout << "size of queue is :" << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty" << endl;
    }

    else{
        cout << "queue is not empty" << endl;
    }

}