### Stack

```
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
 ```

 ### Map
```
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
```

```
#ifndef __CHIPSET_HPP__
#define __CHIPSET_HPP__

using namespace std;

class Chipset
{
public:
    Chipset();
    ~Chipset();
};

#endif
```