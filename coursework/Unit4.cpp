//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Question.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button7Click(TObject *Sender)
{
	Form4->Hide();
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	AnsiString path = "C:\\Questions\\glava1.txt";
	Form1->LoadData(path);
	Form4->Hide();
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
	AnsiString path = "C:\\Questions\\glava2.txt";
	Form1->LoadData(path);
	Form4->Hide();
	Form1->Show();
}
//---------------------------------------------------------------------------

