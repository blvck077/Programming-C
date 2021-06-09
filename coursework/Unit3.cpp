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
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	Image1->Picture->LoadFromFile("C:\\Questions\\author.jpg");
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button7Click(TObject *Sender)
{
	Form3->Hide();
	Form2->Show();
}
//---------------------------------------------------------------------------

