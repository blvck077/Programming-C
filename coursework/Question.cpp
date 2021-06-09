//---------------------------------------------------------------------------

#pragma hdrstop

#include "Question.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

bool Question::isCorrect()
{
	return correctAnswer == userAnswer;
}
