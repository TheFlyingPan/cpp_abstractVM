#include <stack> 
#include <iostream> 
#include <map>
using namespace std;

//#include "dictionnary.cpp"

//my stack is called heap
//dictionnary called fromm dictionnary.cpp

/* int main()
{
    stack<int> pile;    //Une pile vide
    pile.push(3);       //On ajoute le nombre 3 à la pile
    pile.push(4);
    pile.push(5);

    cout << pile.top() << endl; //On consulte le sommet de la pile (le nombre 5)
 
    pile.pop();        //On supprime le dernier élément ajouté (le nombre 5)

    cout << pile.top() << endl; //On consulte le sommet de la pile (le nombre 4)

    return 0;
}
 */


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
    //int top = heap.top();
    //if (top != NULL) {
    //    cout << '\t' << top;
    //}
    //showstack(heap);
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

stack<int> initStack(stack<int> heap){
    heap.push(1);
    return heap;
}

int main(int argc, char** argv)
{
    stack<int> heap;
    //heap.push(4);
    //heap.push(5);
    initStack(heap);
    if(!heap.empty()){
        cout << "heap is not empty\n";
        cout << heap.top() << endl;
    }else if(heap.empty()){
        cout << "heap is empty\n";
    }
    
    cout << "ok cmd\n";
    return(0);
}