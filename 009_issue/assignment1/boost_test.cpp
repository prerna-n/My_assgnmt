#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyTest

#include <boost/test/unit_test.hpp>
#include <iostream>

#include "Ivector.hpp"

BOOST_AUTO_TEST_SUITE( positive_test )


BOOST_AUTO_TEST_CASE(compress_test)
{

    Ivector ivec;
    vector <string>:: iterator it;
    vector <string> strings = { "9", "8", "7", "6", "2", "1", "4", "2", "1", "0", "3"};
    
    for (it = strings.begin(); it != strings.end(); it++) {
        ivec.addString(*it);
    }

    ivec.compress();

    BOOST_CHECK_EQUAL("9", ivec.getElement(0));

}


BOOST_AUTO_TEST_CASE(search_test)
{

    Ivector ob1;
    
    string s = "0";
    ob1.addString("0");
    BOOST_CHECK_EQUAL(0, ob1.searchVector(s));
    
    
    ob1.addString("1");
    s = "1";
    BOOST_CHECK_EQUAL(1, ob1.searchVector(s));
    
    
    s = "2";
    ob1.addString("2");
    BOOST_CHECK_EQUAL(2, ob1.searchVector(s));
    
    s = "4";
    ob1.addString("2");
    BOOST_CHECK_NE(2, ob1.searchVector(s));
    
    ob1.addString("3");
    ob1.addString("4");
    ob1.addString("5");
    ob1.addString("6");
    ob1.addString("7");
    ob1.addString("8");
    ob1.addString("9");
}


BOOST_AUTO_TEST_CASE( test_NonEmpty)
{
    vector <string> strings = { "Hello", "World", "How", "Are", "You", "Doing", " ", "I", "Am", "", "Doing", "Fine"};

    vector <string> ::iterator it;

    vector <string> retval;

    Ivector ivec;

    for (it = strings.begin(); it != strings.end(); it++) {
        ivec.addString(*it);
    }

    retval = ivec.NonEmpty();

    for (it = retval.begin(); it != retval.end(); it++) {
        BOOST_CHECK_NE("", *it);
    }
}


BOOST_AUTO_TEST_CASE( test_sortVector )
{
    vector <string> strings = { "9", "8", "7", "6", "2", "1", "4", "2", "1", "0", "3"};
    vector <string> strings2 = { "0", "1", "1", "2", "2", "3", "4", "6", "7", "8", "9"};

    vector <string> ::iterator it, it2 = strings2.begin();

    vector <string> retval;

    Ivector ivec;

    for (it = strings.begin(); it != strings.end(); it++) {
        ivec.addString(*it);
    }

    retval = ivec.sortVector();

    for (it = retval.begin(); it != retval.end(); it++, it2++) {
        BOOST_CHECK_EQUAL(*it, *it2);
    }
}



BOOST_AUTO_TEST_CASE( test_Unique )
{
    vector <string> strings = { "9", "8", "7", "6", "2", "1", "4", "2", "1", "0", "3"};
    vector <string> strings2 = { "9", "8", "7", "6", "2", "1", "4", "0", "3"};

    vector <string> ::iterator it, it2;

    vector <string> retval;

    Ivector ivec;

    for (it = strings.begin(); it != strings.end(); it++) {
        ivec.addString(*it);
    }

    retval = ivec.Unique();

    /*
     * You need to sort the vector so that it matches
     */
    sort(strings2.begin(), strings2.end());

    it2 = strings2.begin();

    for (it = retval.begin(); it != retval.end(); it++, it2++) {
        BOOST_CHECK_EQUAL(*it, *it2);
    }
}

BOOST_AUTO_TEST_SUITE_END()
