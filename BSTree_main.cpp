
#include <iostream>
#include <fstream>
#include "BSTree.h"

BSTree read_file(string file_name)
{
  /*
    open the file and use the input operator (operator>>)
    to construct a new tree
  */
    
  BSTree new_tree;
  ifstream infile(file_name); 
  // use >> to read in to new_tree
  return new_tree;
}


int main()
{
  // test the copy constructor
  
  // test the copy assignment
  
  for(int i = 1; i <= 12; i++) {
    string dir= "data-files/"+std::to_string(i);
    BSTree l = read_file(dir+"l");
    cout << "average search time linear " << i << " "
	 << l.get_average_search_time() << endl;
    BSTree p = read_file(dir+"p");
    cout << "average search time perfect "<< i << " "
	 << p.get_average_search_time() << endl;
    BSTree r = read_file(dir+"r");
    cout << "average search time random "<< i << " "
	 << r.get_average_search_time() << endl;

    if(i <= 4) {
      cout << "prefect tree " << i << endl << p;
    }

    cout << endl;
  }
    
}

