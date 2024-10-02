/***********************************************************************
 * Source File:
 *    MOVE 
 * Author:
 *    <your name here>
 * Summary:
 *    Everything we need to know about a single chess move
 ************************************************************************/

#include "move.h"
#include "pieceType.h"
#include <cassert>
#include <iostream>
#include <sstream>

using namespace std;

/***************************************************
 * MOVE : DEFAULT CONSTRUCTOR
 ***************************************************/
Move::Move() : promote(PieceType::INVALID), capture(PieceType::INVALID), moveType(Move::MoveType::MOVE), isWhite(true)
{
}

char Move::letterFromPieceType(PieceType pt) const
{
   switch (pt)
   {
   case PieceType::SPACE:
      return ' ';
   case PieceType::PAWN:
      return 'p';
   case PieceType::BISHOP:
      return 'b';
   case PieceType::KNIGHT:
      return 'n';
   case PieceType::ROOK:
      return 'r';
   case PieceType::QUEEN:
      return 'q';
   case PieceType::KING:
      return 'k';
   }

   return -1;
}

PieceType Move::pieceTypeFromLetter(char letter) const
{
   switch (letter)
   {
   case 'p':
      return PieceType::PAWN;
   case 'b':
      return PieceType::BISHOP;
   case 'n':
      return PieceType::KNIGHT;
   case 'r':
      return PieceType::ROOK;
   case 'q':
      return PieceType::QUEEN;
   case 'k':
      return PieceType::KING;
   }

   return PieceType::INVALID;
}



