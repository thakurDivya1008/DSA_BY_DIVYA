#include<iostream>
#include<stack>
using namespace std;

struct Queue{
   stack<int>input,output;

   public:
    void enqueue(int x) {
        // code here
        input.push(x);
    }

    int dequeue() {

        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        
        int num = output.top();
        output.pop();
        
        return num;
        // code here
    }

};

int main(){

    Queue  q;
    q.enqueue(10);
    q.enqueue(38);
    q.enqueue(54);

    cout<<"Removed element from queue is" << q.dequeue();

}