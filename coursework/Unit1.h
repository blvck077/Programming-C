//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
#include <jpeg.hpp>

//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TFileOpenDialog *FileOpenDialog1;
	TFileSaveDialog *FileSaveDialog1;
	TLabel *Label1;
	TImage *Image1;
	TButton *ButtonNext;
	TButton *ButtonAnswer;
	TLabel *LabelCorrect;
	TLabel *LabelFail;
	TTimer *Timer1;
	TLabel *Label11;
	TButton *Button1;
	TButton *ButtonFinish;
	TPanel *Panel1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	void __fastcall ButtonNextClick(TObject *Sender);
	void __fastcall ButtonAnswerClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ButtonFinishClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	void SelectQuestion(int questionIndex);
	int TForm1::GetUserAnswer();
	void TForm1::UncheckRadioButtons();
	void TForm1::VisibleRadioButtons();
	void TForm1::LoadData(AnsiString path);
	void TForm1::LoadQuestionNumberLabels();
	int TForm1::resultCounter(int correctAnswerCounter, int failAnswerCounter);
	void TForm1::IsCheckedRadioButtons();
	void TForm1::IsLastQuestion();
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
