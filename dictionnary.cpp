#include <map>
using namespace std; 

main(){
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
}