#include <iostream> 
#include <stack> 
#include <map>
using namespace std; 

//std::map <key_type, data_type, [comparison_function]>

//std::map <string, char> grade_list;
//grade_list["John"] = 'A';
//grade_list["Jack"] = 'B';
//grade_list["Paul"] = 'C';
// Should be John
//std::cout<<grade_list.begin()->first<<endl;
// Should be A
//std::cout<<grade_list.begin()->second<<endl;
{
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
};

void commentsFunction(){
    //donothing;
}

void pushFunction(int value){
    stack.push(value);
}

void popFunction{
    if(!stack.empty()){
        stack.pop();
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
    stack.clear;
}

void dupFunction{
    //value
    if(!stack.empty()){
        break;
    } else {
        stack.pop();
    }
}

void swapFunction{
    //copy = value1
    //value2 = value1
    //value1 = copy
}
void dumpFunction{
    while (!stack.empty()) { 
        cout << '\t' << stack.top(); 
        stack.pop(); 
    } 
    cout << '\n';
}

void assertFunction{

}

void addFunction{
    stack.pop();
    stack.pop();
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
    top = stack.top();
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
    while (!stack.empty()) 
    { 
        cout << '\t' << stack.top(); 
        stack.pop(); 
    } 
    cout << '\n'; 
}

void main()
{
    cout << "ok";
    stack <int> stack;
}