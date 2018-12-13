#include "gmock/gmock.h"
#include <iostream>
#include <string>
using namespace std;

class Soundex
{
public:
    string encode(const string& word)const {
        return word;
    }
};
#include "gmock/gmock.h"
using::testing::Eg;

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{

    //arrange
    Soundex soundex;

    //Act
    auto encode = soundex.endcode ("A");
    //Assert
    ASSERT_THAT(encode, testing::Eg("A"))
}

