#include <iostream> 
#include <stack> 
using namespace std; 

function_dictionary = {
        "comments":commentsFunction,
        "push":pushFunction,
        "pop":popFunction,
        "error":errorFunction,
        "clear":clearFunction,
        "dup":dupFunction,
        "swap":swapFunction,
        "dump":dumpFunction,
        "assert":assertFunction,
        "add":addFunction,
        "sub":subFunction,
        "mul":mulFunction,
        "div":divFunction,
        "mod":modFunction,
        "load":loadFunction,
        "store":storeFunction,
        "print":printFunction,
        "exit":exitFunction,
    }

void main(int value){
    stack <int> s;
} 

void commentsFunction(){
    //donothing;
}

void pushFunction(int value){
    s.push(value);
}

void popFunction{
    if (!s.empty()) {
        s.pop();
    } else {
        //error;
        break;
    }
}

void errorFunction{
    cout << "error";
    break;
}

void clearFunction{
    s.clear;
}

void dupFunction{
    //value
    if(!s.empty()){
        break;
    } else {
        s.pop();
    }
}

void swapFunction{
    //copy = value1
    //value2 = value1
    //value1 = copy
}
void dumpFunction{
    while (!s.empty()) { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n';
}

void assertFunction{

}

void addFunction{
    s.pop();
    s.pop();
}

void subFunction{

}

void mulFunction{

}

void divFunction{

}

void modFunction{

}

void loadFunction{

}

void storeFunction{

}

void printFunction{
    top = s.top();
    if (top != null) {
        cout << '\t' << top;
    }
    showstack(s);
}

void exitFunction{
    //kill program
    break;
}

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 