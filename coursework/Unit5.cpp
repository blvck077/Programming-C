//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Question.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------


__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TForm5::ImagePictures(int correctAnswerCounter, int failAnswerCounter)
{
	if (failAnswerCounter < 2)
	{
		Image1->Picture->LoadFromFile("C:\\Questions\\sdali.jpg");
	}
	else
	{
		Image1->Picture->LoadFromFile("C:\\Questions\\ne_sdali.jpg");
	}
}

int TForm5::resultCounter(int correctAnswerCounter, int failAnswerCounter)
{
	LabelCorrect->Caption = correctAnswerCounter;
	LabelFail->Caption = failAnswerCounter;
}
void __fastcall TForm5::Button7Click(TObject *Sender)
{
	Form5->Hide();
	Form2->Show();
}
//---------------------------------------------------------------------------

