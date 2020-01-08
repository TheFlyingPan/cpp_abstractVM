#include <map>
#include <string>
#include <iostream>
using namespace std; 

//std::map <key_type, data_type, [comparison_function]>

//Template A - not working
//std::map <string, char> grade_list;
//grade_list["John"] = 'A';
//grade_list["Jack"] = 'B';
//grade_list["Paul"] = 'C';
// Should be John
//std::cout<<grade_list.begin()->first<<endl;
// Should be A
//std::cout<<grade_list.begin()->second<<endl;

//TEMPLATE B - working
/* map <string, string> instructionsCmd = {
            {"a", "1"},
            {"b", "2"},
            {"c", "3"},
            }; */

int main(void){
    map <string, string> instructionsCmd = {
        {"comments", "commentsFunction"},
        {"push", "pushFunction"},
        {"pop", "popFunction"},
        {"error", "errorFunction"},
        {"clear", "clearFunction"},
        {"dup", "dupFunction"},
        {"swap", "swapFunction"},
        {"dump", "dumpFunction"},
        {"assert", "assertFunction"},
        {"add", "addFunction"},
        {"sub", "subFunction"},
        {"mul", "mulFunction"},
        {"div", "divFunction"},
        {"mod", "modFunction"},
        {"load", "loadFunction"},
        {"store", "storeFunction"},
        {"print", "printFunction"},
        {"exit", "exitFunction"},
        };

    //READ MAP
    cout << "Map contains following elements" << endl;

   for (auto it = instructionsCmd.begin(); it != instructionsCmd.end(); ++it)
      cout << it->first << " = " << it->second << endl;

    return 0;
}