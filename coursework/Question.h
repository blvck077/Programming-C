//---------------------------------------------------------------------------

#include <vcl.h>
#ifndef QuestionH
#define QuestionH
//---------------------------------------------------------------------------
#endif

class Question
{
public:
	AnsiString text;
	AnsiString answer1;
	AnsiString answer2;
	AnsiString answer3;
	AnsiString answer4;
	int correctAnswer;
	int userAnswer;
	AnsiString picturePath;
	bool isCorrect();
};
