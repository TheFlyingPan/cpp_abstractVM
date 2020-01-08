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

main(){
std::map <char, char> instructionsCmd;
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
}