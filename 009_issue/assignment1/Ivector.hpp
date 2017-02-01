#ifndef IVECTOR_HPP

#define IVECTOR_HPP

#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <set>

using namespace std;

class Ivector {
    private:
        vector <string> vec;
        vector <string *> mapp;
        vector <string> uniq;

    public:
        int searchVector(string);
        void addString(string s) {
            vec.push_back(s);
        }

        vector <string> NonEmpty(void);
        vector <string> sortVector(void);
        vector <string> Unique(void);
        void compress(void);
        string getElement(int);
};

#endif
