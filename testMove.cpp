/***********************************************************************
 * Header File:
 *    TEST MOVE 
 * Author:
 *    <your name here>
 * Summary:
 *    test the Move class
 ************************************************************************/


#include "testMove.h"
#include "move.h"
#include <cassert>

 /*************************************
  * Constructor : default
  * Input: 
  * Output: source=INVALID
  *         dest  =INVALID
  **************************************/
void TestMove::constructor_default() 
{
   // SETUP
   // EXERCISE
   Move move;

   // VERIFY
   assertUnit(move.source == 0x99);
   assertUnit(move.dest == 0x99);
   assertUnit(move.promote == PieceType::INVALID);
   assertUnit(move.capture == PieceType::INVALID);
   assertUnit(move.moveType == Move::MoveType::MOVE);
   assertUnit(move.isWhite);
   assertUnit(move.text == string(""));

}  // TEARDOWN

 /*************************************
  * CONSTRUCTOR : standard string move
  * Input:  e5e6
  * Output: source=4,4
  *         dest  =4,5
  *         type  =MOVE
  **************************************/
void TestMove::constructString_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ simple move 
  * Input:  e5e6
  * Output: source=4,4
  *         dest  =4,5
  *         type  =MOVE
  **************************************/
void TestMove::read_simple()
{
   // SETUP
   PositionStub 

   // EXERCISE
   Move move("e5e6");

   // VERIFY
   assertUnit(move.source == )

}  // TEARDOWN

 /*************************************
  * READ capture move 
  * Input:  e5d6r
  * Output: source=4,4
  *         dest  =3,5
  *         type  =MOVE
  *         capture=ROOK
  **************************************/
void TestMove::read_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ enpassant move 
  * Input:  e5f6E
  * Output: source=4,4
  *         dest  =5,5
  *         type  =ENPASSANT
  **************************************/
void TestMove::read_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ king side castle
  * Input:  e1g1c
  * Output: source=4,0
  *         dest  =6,0
  *         type  =CASTLE_KING
  **************************************/
void TestMove::read_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ queen side castle
  * Input:  e1c1C
  * Output: source=4,0
  *         dest  =2,0
  *         type  =CASTLE_QUEEN
  **************************************/
void TestMove::read_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN simple move
  * Input:  e5e6
  * Output: source=4,4
  *         dest  =4,5
  *         type  =MOVE
  **************************************/
void TestMove::assign_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN capture move
  * Input:  e5d6r
  * Output: source=4,4
  *         dest  =3,5
  *         type  =MOVE
  *         capture=ROOK
  **************************************/
void TestMove::assign_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN enpassant move
  * Input:  e5f6E
  * Output: source=4,4
  *         dest  =5,5
  *         type  =ENPASSANT
  **************************************/
void TestMove::assign_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN king side castle
  * Input:  e1g1c
  * Output: source=4,0
  *         dest  =6,0
  *         type  =CASTLE_KING
  **************************************/
void TestMove::assign_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN queen side castle
  * Input:  e1c1C
  * Output: source=4,0
  *         dest  =2,0
  *         type  =CASTLE_QUEEN
  **************************************/
void TestMove::assign_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT simple move
  * Input : source=4,4
  *         dest  =4,5
  *         type  =MOVE
  * Output:  e5e6
  **************************************/
void TestMove::getText_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT capture
  * Input : source=4,4
  *         dest  =4,5
  *         type  =MOVE
  *         capture=ROOK
  * Output:  e5e6r
  **************************************/
void TestMove::getText_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT en passant
  * Input : source=4,4
  *         dest  =5,5
  *         type  =ENPASSANT
  *         capture=PAWN
  * Output:  e5f6E
  **************************************/
void TestMove::getText_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT king side castle
  * Input : source=4,0
  *         dest  =6,0
  *         type  =CASTLE_KING
  * Output:  e1g1c
  **************************************/
void TestMove::getText_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT queen side castle
  * Input : source=4,0
  *         dest  =2,0
  *         type  =CASTLE_QUEEN  
  * Output:  e1c1C
  **************************************/
void TestMove::getText_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * LETTER FROM PIECE TYPE space
  * Input :  SPACE
  * Output:  ' '
  **************************************/
void TestMove::letterFromPieceType_space()
{
   // SETUP
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::SPACE);

   // VERIFY
   assertUnit(letter == ' ');

}  // TEARDOWN

 /*************************************
  * LETTER FROM PIECE TYPE pawn
  * Input : PAWN
  * Output:  'p'
  **************************************/
void TestMove::letterFromPieceType_pawn()
{
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::PAWN);

   // VERIFY
   assertUnit(letter == 'p');

} // TEARDOAWN

 /*************************************
  * LETTER FROM PIECE TYPE bishop
  * Input : BISHOP
  * Output:  'b'
  **************************************/
void TestMove::letterFromPieceType_bishop()
{
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::BISHOP);

   // VERIFY
   assertUnit(letter == 'b');

}  // TEARDOWN

 /*************************************
  * LETTER FROM PIECE TYPE knight
  * Input : KNIGHT
  * Output:  'n'
  **************************************/
void TestMove::letterFromPieceType_knight()
{
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::KNIGHT);

   // VERIFY
   assertUnit(letter == 'n');

}  // TEARDOWN

 /*************************************
  * LETTER FROM PIECE TYPE rook
  * Input : ROOK
  * Output:  'r'
  **************************************/
void TestMove::letterFromPieceType_rook()
{
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::ROOK);

   // VERIFY
   assertUnit(letter == 'r');

}  // TEARDOWN

 /*************************************
  * LETTER FROM PIECE TYPE queen
  * Input : QUEEN
  * Output:  'q'
  **************************************/
void TestMove::letterFromPieceType_queen()
{
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::QUEEN);

   // VERIFY
   assertUnit(letter == 'q');

}  // TEARDOWN

 /*************************************
  * LETTER FROM PIECE TYPE king
  * Input : KING
  * Output:  'k'
  **************************************/
void TestMove::letterFromPieceType_king()
{
   Move move;

   // EXERCISE
   char letter = move.letterFromPieceType(PieceType::KING);

   // VERIFY
   assertUnit(letter == 'k');

}  // TEARDOWN

 /*************************************
  * PIECE TYPE FROM LETTER pawn
  * Input : 'p'
  * Output:  PAWN
  **************************************/
void TestMove::pieceTypeFromLetter_pawn()
{
   // SETUP
   Move move;

   // EXERCISE
   PieceType pieceType = move.pieceTypeFromLetter('p');

   // VERIFY
   assertUnit(pieceType == PieceType::PAWN);

}  // TEARDOWN

 /*************************************
  * PIECE TYPE FROM LETTER bishop
  * Input : 'b'
  * Output:  BISHOP
  **************************************/
void TestMove::pieceTypeFromLetter_bishop()
{
   // SETUP
   Move move;

   // EXERCISE
   PieceType pieceType = move.pieceTypeFromLetter('b');

   // VERIFY
   assertUnit(pieceType == PieceType::BISHOP);

}  // TEARDOWN

 /*************************************
  * PIECE TYPE FROM LETTER knight
  * Input : 'n'
  * Output:  KNIGHT
  **************************************/
void TestMove::pieceTypeFromLetter_knight()
{
   // SETUP
   Move move;

   // EXERCISE
   PieceType pieceType = move.pieceTypeFromLetter('n');

   // VERIFY
   assertUnit(pieceType == PieceType::KNIGHT);

}  // TEARDOWN

 /*************************************
  * PIECE TYPE FROM LETTER rook
  * Input : 'r'
  * Output:  ROOK
  **************************************/
void TestMove::pieceTypeFromLetter_rook()
{
   // SETUP
   Move move;

   // EXERCISE
   PieceType pieceType = move.pieceTypeFromLetter('r');

   // VERIFY
   assertUnit(pieceType == PieceType::ROOK);

}  // TEARDOWN

 /*************************************
  * PIECE TYPE FROM LETTER queen
  * Input : 'q'
  * Output:  QUEEN
  **************************************/
void TestMove::pieceTypeFromLetter_queen()
{
   // SETUP
   Move move;

   // EXERCISE
   PieceType pieceType = move.pieceTypeFromLetter('q');

   // VERIFY
   assertUnit(pieceType == PieceType::QUEEN);

}  // TEARDOWN

 /*************************************
  * PIECE TYPE FROM LETTER king
  * Input : 'k'
  * Output:  KING
  **************************************/
void TestMove::pieceTypeFromLetter_king() 
{
   // SETUP
   Move move;

   // EXERCISE
   PieceType pieceType = move.pieceTypeFromLetter('k');

   // VERIFY
   assertUnit(pieceType == PieceType::KING);

}  // TEARDOWN


 /*************************************
  * EQUAL - NOT
  * Input : b2b4 == b2b5
  * Output: false
  **************************************/
void TestMove::equal_not()
{
   // SETUP
   Move moveb4("b2b4");
   Move moveb5("b2b5");
   
   // EXERCISE   
   // VERIFY
   assertUnit(moveb4 != moveb5);

}  // TEARDOWN

 /*************************************
  * EQUAL - EQUALS
  * Input : b2b4 == b2b4
  * Output: true
  **************************************/
void TestMove::equal_equals()
{
   // SETUP
   Move move1("b2b4");
   Move move2("b2b4");

   // EXERCISE
   // VERIFY
   assertUnit(move1 == move2);

}  // TEARDOWN

 /*************************************
  * LESS THAN - LESS THAN
  * Input : b2b2 < b2b4
  * Output: true
  **************************************/
void TestMove::lessthan_lessthan()
{
   // SETUP
   Move moveb2("b2b2");
   Move moveb4("b2b4");

   // EXERCISE
   // VERIFY
   assertUnit(moveb2 < moveb4);

}  // TEARDOWN

 /*************************************
  * LESS THAN - EQUALS
  * Input : b2b4 < b2b4
  * Output: false
  **************************************/
void TestMove::lessthan_equals()
{
   // SETUP
   Move move1("b2b4");
   Move move2("b2b4");

   // EXERCISE
   // VERIFY
   assertUnit(move1 < move2 == false);

}  // TEARDOWN

 /*************************************
  * LESS THAN - GREATAER THAN
  * Input : b2b4 < b2b2
  * Output: false
  **************************************/
void TestMove::lessthan_greaterthan()
{
   // SETUP
   Move moveb4("b2b4");
   Move moveb2("b2b2");

   // EXERCISE
   // VERIFY
   assertUnit(moveb4 < moveb2 == false);

}  // TEARDOWN
