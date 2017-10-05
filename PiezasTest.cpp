/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	Piezas P;
	ASSERT_TRUE(true);
}

TEST(PiezasTest, dropPiece1)
{
	Piezas P;
	ASSERT_EQ('?',P.dropPiece(-1));
}

TEST(PiezasTest, dropPiece2)
{
	Piezas P;
	P.dropPiece(1);
	ASSERT_EQ('?',P.dropPiece(-1));
}

TEST(PiezasTest, dropPiece3)
{
	Piezas P;
	ASSERT_EQ('?',P.dropPiece(11));
}

TEST(PiezasTest, dropPiece4)
{
	Piezas P;
	ASSERT_EQ('X',P.dropPiece(1));
}

TEST(PiezasTest, dropPiece5)
{
	Piezas P;
	P.dropPiece(1);
	ASSERT_EQ('O',P.dropPiece(1));
}

TEST(PiezasTest, dropPiece6)
{
	Piezas P;
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(1);
	ASSERT_EQ(' ',P.dropPiece(1));
}

TEST(PiezasTest, dropPiece7)
{
	Piezas P;
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(2);
	ASSERT_EQ(' ',P.dropPiece(1));
}

TEST(PiezasTest, pieceAt1)
{
	Piezas P;
	ASSERT_EQ('?',P.pieceAt(-1,1));
}

TEST(PiezasTest, pieceAt2)
{
	Piezas P;
	ASSERT_EQ('?',P.pieceAt(11,1));
}

TEST(PiezasTest, pieceAt3)
{
	Piezas P;
	ASSERT_EQ('?',P.pieceAt(1,-1));
}

TEST(PiezasTest, pieceAt4)
{
	Piezas P;
	ASSERT_EQ('?',P.pieceAt(1,11));
}

TEST(PiezasTest, pieceAt5)
{
	Piezas P;
	ASSERT_EQ(' ',P.pieceAt(1,1));
}

TEST(PiezasTest, pieceAt6)
{
	Piezas P;
	P.dropPiece(1);
	ASSERT_EQ('X',P.pieceAt(0,1));
}

TEST(PiezasTest, pieceAt7)
{
	Piezas P;
	P.dropPiece(1);
	P.dropPiece(1);
	ASSERT_EQ('O',P.pieceAt(1,1));
}

TEST(PiezasTest, reset1)
{
	Piezas P;
	P.dropPiece(1);
	P.reset();
	ASSERT_EQ(' ',P.pieceAt(0,1));
}

TEST(PiezasTest, reset2)
{
	Piezas P;
	P.dropPiece(1);
	P.reset();
	P.dropPiece(1);
	ASSERT_EQ('O',P.pieceAt(0,1));
}

TEST(PiezasTest, gameState1)
{
	Piezas P;
	P.dropPiece(1);
	ASSERT_EQ('?',P.gameState());
}

TEST(PiezasTest, gameState2)
{
	Piezas P;
	P.dropPiece(0);
	P.dropPiece(11);
	P.dropPiece(0);
	P.dropPiece(11);
	P.dropPiece(0);
	P.dropPiece(11);
	P.dropPiece(1);
	P.dropPiece(11);
	P.dropPiece(1);
	P.dropPiece(11);
	P.dropPiece(1);
	P.dropPiece(11);
	P.dropPiece(2);
	P.dropPiece(11);
	P.dropPiece(2);
	P.dropPiece(11);
	P.dropPiece(2);
	P.dropPiece(11);
	P.dropPiece(3);
	P.dropPiece(11);
	P.dropPiece(3);
	P.dropPiece(11);
	P.dropPiece(3);
	ASSERT_EQ('X',P.gameState());
}

TEST(PiezasTest, gameState3)
{
	Piezas P;
	P.dropPiece(11);
	P.dropPiece(0);
	P.dropPiece(11);
	P.dropPiece(0);
	P.dropPiece(11);
	P.dropPiece(0);
	P.dropPiece(11);
	P.dropPiece(1);
	P.dropPiece(11);
	P.dropPiece(1);
	P.dropPiece(11);
	P.dropPiece(1);
	P.dropPiece(11);
	P.dropPiece(2);
	P.dropPiece(11);
	P.dropPiece(2);
	P.dropPiece(11);
	P.dropPiece(2);
	P.dropPiece(11);
	P.dropPiece(3);
	P.dropPiece(11);
	P.dropPiece(3);
	P.dropPiece(11);
	P.dropPiece(3);
	ASSERT_EQ('O',P.gameState());
}

TEST(PiezasTest, gameState4)
{
	Piezas P;
	P.dropPiece(0);
	P.dropPiece(0);
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(2);
	P.dropPiece(2);
	P.dropPiece(2);
	P.dropPiece(3);
	P.dropPiece(3);
	P.dropPiece(3);
	ASSERT_EQ(' ',P.gameState());
}

TEST(PiezasTest, gameState5)
{
	Piezas P;
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(2);
	P.dropPiece(2);
	P.dropPiece(2);
	P.dropPiece(3);
	P.dropPiece(3);
	P.dropPiece(3);
	ASSERT_EQ(' ',P.gameState());
}

TEST(PiezasTest, gameState6)
{
	Piezas P;
	P.dropPiece(0);
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(2);
	P.dropPiece(2);
	P.dropPiece(3);
	P.dropPiece(3);
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(2);
	P.dropPiece(3);
	ASSERT_EQ(' ',P.gameState());
}

TEST(PiezasTest, gameState7)
{
	Piezas P;
	P.dropPiece(0);
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(1);
	P.dropPiece(2);
	P.dropPiece(2);
	P.dropPiece(3);
	P.dropPiece(0);
	P.dropPiece(3);
	P.dropPiece(1);
	P.dropPiece(2);
	P.dropPiece(3);
	ASSERT_EQ('X',P.gameState());
}

TEST(PiezasTest, gameState8)
{
	Piezas P;
	P.dropPiece(0);
	P.dropPiece(1);
	P.dropPiece(0);
	P.dropPiece(2);
	P.dropPiece(1);
	P.dropPiece(3);
	P.dropPiece(3);
	P.dropPiece(2);
	P.dropPiece(3);
	P.dropPiece(2);
	P.dropPiece(1);
	P.dropPiece(0);
	ASSERT_EQ('O',P.gameState());
}