//---------------------------------------------------------------------------
#include <vcl.h>
#include <jpeg.hpp>
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
TForm1 *Form1;
Question *questions = new Question[10];
TLabel **questionNumberLabels = new TLabel*[10];
int currentQuestionIndex = 0;
int correctAnswerCounter = 0;
int failAnswerCounter = 0;
int timerCounter = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	LoadQuestionNumberLabels();
}
//---------------------------------------------------------------------------

void TForm1::LoadQuestionNumberLabels()
{
	for (int i = 0; i < 10; i++) {
	questionNumberLabels[i] = new TLabel(Form1);
	questionNumberLabels[i]->Parent = Panel4;
	questionNumberLabels[i]->AutoSize = false;
	questionNumberLabels[i]->Font->Color = clWhite;
	questionNumberLabels[i]->Font->Size = 12;
	questionNumberLabels[i]->Alignment = taCenter;
	questionNumberLabels[i]->Layout = tlCenter;
	questionNumberLabels[i]->Color = clBtnShadow;
	questionNumberLabels[i]->Font->Style = TFontStyles ( ) <<fsBold;
	questionNumberLabels[i]->Margins->Top = 60;
	questionNumberLabels[i]->Height = 51;
	questionNumberLabels[i]->Width = 51;
	questionNumberLabels[i]->Caption = IntToStr(i+1);
	questionNumberLabels[i]->Left = (700+i*60);
	questionNumberLabels[i]->Top = 18;
	questionNumberLabels[i]->Transparent = false;
	}
}

void TForm1::LoadData(AnsiString path)
{
	//TFileStream *tfile = new TFileStream("C:\\Questions\\glava2.txt", fmOpenReadWrite);
	TFileStream *tfile = new TFileStream(path, fmOpenReadWrite);
	TStringList *ts = new TStringList();
	ts->LoadFromStream(tfile);
	int currentLineIndex = 0;
	for (int i = 0; i < 10; i++)
	{
		questions[i].text=ts->Strings[currentLineIndex++];
		questions[i].answer1=ts->Strings[currentLineIndex++];
		questions[i].answer2=ts->Strings[currentLineIndex++];
		questions[i].answer3=ts->Strings[currentLineIndex++];
		questions[i].answer4=ts->Strings[currentLineIndex++];
		questions[i].correctAnswer = StrToInt(ts->Strings[currentLineIndex++]);
		questions[i].picturePath=ts->Strings[currentLineIndex++];
	}

	this->SelectQuestion(0);
}

int TForm1::GetUserAnswer()
{
	if (RadioButton1->Checked)
	{
		return 1;
	}
	if (RadioButton2->Checked)
	{
		return 2;
	}
	if (RadioButton3->Checked)
	{
		return 3;
	}
	if (RadioButton4->Checked)
	{
		return 4;
	}

}

void TForm1::VisibleRadioButtons()
{
	RadioButton1->Visible = true;
	RadioButton2->Visible = true;
	RadioButton3->Visible = true;
	RadioButton4->Visible = true;
}

void TForm1::SelectQuestion(int questionIndex)
{
	Label1->Caption = (questions[questionIndex].text);
	RadioButton1->Caption = (questions[questionIndex].answer1);

	RadioButton2->Caption = (questions[questionIndex].answer2);
	RadioButton3->Caption = (questions[questionIndex].answer3);
	RadioButton4->Caption = (questions[questionIndex].answer4);
	if (questions[questionIndex].answer3 == '-') {
		RadioButton3->Visible = false;
	}
	else
	{
		VisibleRadioButtons();
	}

	if (questions[questionIndex].answer4 == '-') {
		RadioButton4->Visible = false;
	}
	else
	{
		VisibleRadioButtons();
	}

	if (questions[questionIndex].picturePath == '-') {
	Image1->Visible=false;
	}
	else
	{
	Image1->Visible=true;
	Image1->Picture->LoadFromFile(questions[questionIndex].picturePath);
	}
}
//---------------------------------------------------------------------------

void TForm1::UncheckRadioButtons()
{
	RadioButton1->Checked = false;
	RadioButton2->Checked = false;
	RadioButton3->Checked = false;
	RadioButton4->Checked = false;
}

void TForm1::IsCheckedRadioButtons()
{
	if (RadioButton1->Checked == false || RadioButton2->Checked == false ||
	RadioButton3->Checked == false || RadioButton4->Checked == false)
	{
		ButtonAnswer->Visible = false;
		ButtonNext->Visible = true;
	}
}

void TForm1::IsLastQuestion()
{
	if (currentQuestionIndex == 9)
	{
	ButtonAnswer->Visible=false;
	ButtonNext->Visible=false;
	ButtonFinish->Visible=true;
	}
}

void __fastcall TForm1::ButtonNextClick(TObject *Sender)
{
	//IsCheckedRadioButtons();
	currentQuestionIndex++;
	SelectQuestion(currentQuestionIndex);
	LabelFail->Visible=false;
	LabelCorrect->Visible=false;
	ButtonAnswer->Visible=true;
	ButtonNext->Visible=false;
	UncheckRadioButtons();
	//IsLastQuestion();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonAnswerClick(TObject *Sender)  // функция проверки правильности ответа
{
	questions[currentQuestionIndex].userAnswer = GetUserAnswer();
	if (questions[currentQuestionIndex].isCorrect())
	{
		questionNumberLabels[currentQuestionIndex]->Color = clGreen;
		LabelFail->Visible=false;
		LabelCorrect->Visible=true;
		correctAnswerCounter++; // глобальной переменной объявил counter, который записывает в себя
								// количество правильных ответов
	}
	else
	{
		questionNumberLabels[currentQuestionIndex]->Color = clMaroon;
		LabelFail->Visible=true;
		LabelCorrect->Visible=false;
		failAnswerCounter++; // аналогично с неправильными ответами
	}
	ButtonAnswer->Visible=false;
	ButtonNext->Visible=true;
	IsLastQuestion();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	static int time = 900; // начальное время в секундах
	Label11->Caption = String().sprintf(L"%02d:%02d", ((time % SecsPerDay) % SecsPerHour) / SecsPerMin,
													 ((time % SecsPerDay) % SecsPerHour) % SecsPerMin);
	time -= 1;
	Timer1->Enabled = (time != 0);

	while (time == 0)
	{
		Form1->Close();
	}

}
//----------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Hide();
	Form5->Show();
	Form5->resultCounter(correctAnswerCounter, failAnswerCounter);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonFinishClick(TObject *Sender)
{
	Form1->Hide();
	Form5->Show();
	Form5->resultCounter(correctAnswerCounter, failAnswerCounter);
	Form5->ImagePictures(correctAnswerCounter, failAnswerCounter);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Form1->Hide();
	Form2->Show();
}
//---------------------------------------------------------------------------



