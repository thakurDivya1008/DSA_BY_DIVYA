#include<iostream>
using namespace std;
class Stack{
    int size;
    int *arr;
    int top;
   public:
    Stack(){
        top = -1;
        size = 10;
        arr = new int [size];
    }

    int push(int num){
        if(top >= size - 1){
          cout << "Stack Overflow";
        }
        else{
            top++;
            arr[top] = num;
        }


    }

    int pop(){

        if(top == -1){
            cout <<"Stack is empty";
        }
        else{

            int x = arr[top];
             top --;
             cout<< "Popped element is :"<< x<<endl;
        }
    }

    void Top(){
        cout<< " Top element of array is:"<< arr[top]<<endl;
    }

    void Size(){
       cout << "Size of Array is:"<< top + 1<<endl;
    }

};

int main(){
    Stack s;
    s.push(2);
    s.push(3);
    s.pop();

    s.Size();
    s.Top();

}