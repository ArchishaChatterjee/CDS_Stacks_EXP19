#include <iostream>
#define MAX 5
using namespace std;

class stack{
    private :
    int array[MAX];
    int top;
 
    public:
    stack(void){
        top = -1;
    }
 
    void push(int value){
        if(top >= MAX - 1){
            std::cout<<"Stack Overflow!"<<'\n';
            exit(0);
        }
        else{
        top += 1;
        array[top] = value;
        }
    }
 
    void pop(void){
        if(top < 0){
            cout<<"Underflow"<<endl;
            exit(0);
        }
        else{
        top -= 1;
        }
    }
 
    void display(void){
        cout<<"Displaying stack data"<<endl;
        for(int i = 0; i <=top; i++){
            std::cout<<array[i]<<"\t";
        }
        cout<<endl;
    }
};
int main(void) {
    stack mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(10);
    mystack.push(20);
    mystack.push(10);
    mystack.display();
    mystack.pop();
    mystack.display();
 
    return 0;
}

/*
Sample Output:
Displaying stack data
10	20	10	20	10
Displaying stack data
10	20	10	20
*/
