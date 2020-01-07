#include <iostream> 
#include <stack> 
#include <map>
using namespace std; 

//my stack is called heap

//std::map <key_type, data_type, [comparison_function]>

//std::map <string, char> grade_list;
//grade_list["John"] = 'A';
//grade_list["Jack"] = 'B';
//grade_list["Paul"] = 'C';
// Should be John
//std::cout<<grade_list.begin()->first<<endl;
// Should be A
//std::cout<<grade_list.begin()->second<<endl;


void commentsFunction(){
    //donothing;
}

void pushFunction(stack <int> heap, int value){
    heap.push(value);
}

void popFunction(stack <int> heap){
    if(!heap.empty()){
        heap.pop();
    }
}

void errorFunction(){
    cout << "error";
}

void clearFunction(stack <int> heap){
    //heap.clear;
}

void dupFunction(stack <int> heap){
    //value chack
    if(!heap.empty()){
        heap.pop();
    }

}

void swapFunction(){
    //copy = value1
    //value2 = value1
    //value1 = copy
}
void dumpFunction(stack <int> heap){
    while (!heap.empty()) { 
        cout << '\t' << heap.top(); 
        heap.pop(); 
    } 
    cout << '\n';
}

void assertFunction(){

}

void addFunction(stack <int> heap){
    heap.pop();
    heap.pop();
}

void subFunction(){

}

void mulFunction(){

}

void divFunction(){

}

void modFunction(){

}

void loadFunction(){

}

void storeFunction(stack <int> heap){

}

void printFunction(stack <int> heap){
    int top = heap.top();
    if (top != NULL) {
        cout << '\t' << top;
    }
    showstack(heap);
}

void exitFunction(stack <int> heap){
    //kill program
    //break;
}

void showstack(stack <int> heap) 
{ 
    while (!heap.empty()) 
    { 
        cout << '\t' << heap.top(); 
        heap.pop(); 
    } 
    cout << '\n'; 
}

void main(stack <int> heap, string input)
{
    if(!heap.empty()){
        cout << "heap is not empty";
        cout << heap.top() << endl;
    }
    

    std::map <string, string> instructionsCmd;
        instructionsCmd["comments"] = 'commentsFunction';
        instructionsCmd["push"] = 'pushFunction';
        instructionsCmd["pop"] = 'popFunction';
        instructionsCmd["error"] = 'errorFunction';
        instructionsCmd["clear"] = 'clearFunction';
        instructionsCmd["dup"] = 'dupFunction';
        instructionsCmd["swap"] = 'swapFunction';
        instructionsCmd["dump"] = 'dumpFunction';
        instructionsCmd["assert"] = 'assertFunction';
        instructionsCmd["add"] = 'addFunction';
        instructionsCmd["sub"] = 'subFunction';
        instructionsCmd["mul"] = 'mulFunction';
        instructionsCmd["div"] = 'divFunction';
        instructionsCmd["mod"] = 'modFunction';
        instructionsCmd["load"] = 'loadFunction';
        instructionsCmd["store"] = 'storeFunction';
        instructionsCmd["print"] = 'printFunction';
        instructionsCmd["exit"] = 'exitFunction';


    cout << "ok cmd";
    stack <int> heap;
}