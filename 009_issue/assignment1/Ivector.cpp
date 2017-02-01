#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <set>

#include "Ivector.hpp"

int Ivector::searchVector(string s) {
  vector <string> ::iterator it;
  int i=0;
  for (it = vec.begin(); it != vec.end(); it++, i++) {
    if (*it == s) {
      return i;
    }
  }
  return -1;
}

/*
 * Function named Compress that removes the duplicate strings, but is someone
 * can  get string using function getElement(int index). For example: If Ivector has
 * following 6 strings:
 *
 * "hello", "bye", "bye", "hello", "bye"
 *
 * So after Compress it has only 2 strings:
 *
 *
 * "hello", "bye"
 *
 * but if someone do like getElement(1) getElement(2) or getElement(4) he will
 * get string bye.
 *
 * Solution:
 *  
 *  Uniq is a vectore which keeps the unique elements - it uses the interface
 *  Unique provided by the class.
 *
 *  It finds the index of the element and stores in the mapp wherever it
 *  matches with the unique element.
 *
 *  <ques> proper unit test of the following is to actually - check if the mapp
 *  is saving the elements correctly or not. Like are the addresses are saved
 *  correctly or not.
 */


void Ivector::compress(void) {
  vector <string>:: iterator it, index;
  vector <string *>:: iterator it2;

  int i=0;
  
  uniq = this->Unique();

  for (it = vec.begin(); it != vec.end(); it++, i++) {
    index = find(uniq.begin(), uniq.end(), *it);
    if (index != uniq.end()) {
      mapp.push_back(&(*index));
    } else {
      continue;
    }
  }
}

string Ivector::getElement(int i){
  return *mapp[i];
}

vector <string> Ivector::sortVector(void) {
  vector <string> retval;
  retval = vec;
  sort(retval.begin(), retval.end());
  return retval;
}

bool myfunction (string a, string b) {
  return (a == b);
}

/*
 * TODO: Though we are doing it this way, where we are sorting and copying the vector
 * and then again finding uniques which is making multiple copies of the same
 * data.
 * An ideal implementation should not do this.
 */

void printInt (int a) {
}

/*
 * Using integers this function also display how to use std::unique function
 */

/*
int integer_uniqu(void) {
  vector <int> vecInt = { 1, 2, 3, 4, 5, 6, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8 };
  vector <int> :: iterator itInt;
  
  for_each (vecInt.begin(), vecInt.end(), printInt);
  cout << endl;

  itInt = unique(vecInt.begin(), vecInt.end());
  itInt--;
  
  for_each (vecInt.begin(), vecInt.end(), printInt);
  
  vecInt.resize(distance(vecInt.begin(), itInt));

  for (itInt = vecInt.begin(); itInt != vecInt.end(); itInt++) {
    cout << *itInt;
  }
}


*/


/*
 * use the set template to remove the dumplicates - know that this will change
 * the order of the stored element.
 */
vector <string> Ivector::Unique(void) {
  
  vector <string>::iterator  i;
  vector <string> retval;


  set <string> temp;
  set <string> ::iterator j;

  for ( i = vec.begin(); i != vec.end(); i++) {
    temp.insert(*i);
  }
  
  i = retval.begin();
  for (j = temp.begin(); j != temp.end(); j++, i++) {
    retval.push_back(*j);
  }


  return retval;
}

vector <string> Ivector::NonEmpty(void) {
  vector <string>:: iterator it;
  vector <string> retval;
  retval.push_back("HEY THIS IS TEST");
  for (it = vec.begin(); it != vec.end(); it++) {
    if (*it != "") {
      retval.push_back(*it);
    }
  }
  return retval;
}


