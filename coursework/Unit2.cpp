//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <jpeg.hpp>
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Question.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//TLabel **questionNumberLabels = new TLabel*[10];
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Image1->Picture->LoadFromFile("C:\\Questions\\logo_soglas.jpg");
	Image2->Picture->LoadFromFile("C:\\Questions\\logo_belmapo.jpg");
	//Image3->Picture->LoadFromFile("C:\\Questions\\limma.jpg");
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	AnsiString path = "C:\\Questions\\ekzamen.txt";
	Form1->LoadData(path);
	Form2->Hide();
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
	Form2->Hide();
	Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Form2->Hide();
	Form4->Show();
}
//---------------------------------------------------------------------------
