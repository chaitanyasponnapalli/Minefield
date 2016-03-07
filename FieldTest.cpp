/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, checkSafe)
{
	Field minefield;
	int safe=0;
	try{
		minefield.isSafe(11,11)
	}
	catch(...){
		safe=1;
	}
	ASSERT_TRUE(safe,1 );
}



TEST(FieldTest, isSafeinboundtr)
{
	Field minefield;
  	ASSERT_TRUE( minefield.isSafe(6,5) );
}

TEST(FieldTest, isSafeinbounds0)
{
	Field minefield;
  	ASSERT_TRUE( minefield.isSafe(0,7) );
}

TEST(FieldTest, isSafeinbounds)
{
	Field minefield;
  	ASSERT_TRUE( minefield.isSafe(6,0) );
}


TEST(FieldTest, isSafenegative)
{



	Field minefield;
	int safe=0;
  try
  {
  	minefield.isSafe(-5,-7)
  }
  catch(...)
  {
    safe=1;
  }
	ASSERT_TRUE(safe,1 );
}



