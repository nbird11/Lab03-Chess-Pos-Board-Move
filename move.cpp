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
#include <bitset>

using namespace std;

/***************************************************
 * MOVE : DEFAULT CONSTRUCTOR
 ***************************************************/
Move::Move() : promote(PieceType::INVALID), capture(PieceType::INVALID), moveType(Move::MoveType::MOVE), isWhite(true)
{
}

Move::Move(const char* text, const bool& isWhite)
{
   this->text = text;
   string firstTwo_s = this->text.substr(0, 2);
   const char* firstTwo = firstTwo_s.c_str();
   this->source = Position(firstTwo);

   string nextTwo_s = this->text.substr(2, 4);
   const char* nextTwo = nextTwo_s.c_str();
   this->dest = Position(nextTwo);

   this->moveType = MOVE;
   this->isWhite = isWhite;

   promote = PieceType::INVALID;
   capture = PieceType::INVALID;
}

bool Move::operator==(const Move& rhs)
{
   return this->source == rhs.source
      && this->dest == rhs.dest
      && this->promote == rhs.promote
      && this->capture == rhs.capture
      && this->moveType == rhs.moveType
      && this->isWhite == rhs.isWhite
      && this->text == rhs.text;
}

bool Move::operator!=(const Move& rhs)
{
   return this->source != rhs.source
      || this->dest != rhs.dest
      || this->promote != rhs.promote
      || this->capture != rhs.capture
      || this->moveType != rhs.moveType
      || this->isWhite != rhs.isWhite
      || this->text != rhs.text;
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



