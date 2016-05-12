//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit3.cpp"
#include <cstring.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sButton"
#pragma link "acPNG"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Panel1->Visible = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N2Click(TObject *Sender)
{  //
        Panel1->Visible = true;
        Panel2->Visible = false;
        Panel3->Visible = false;
        Panel4->Visible = false;
        Panel4->Visible = false;
        Panel5->Visible = false;

        Panel1->Align = alClient;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormCreate(TObject *Sender)
{ //запуск программы

        Panel1->Visible = false;
        Panel2->Visible = false;
        Panel3->Visible = false;
        Panel4->Visible = false;
        Panel5->Visible = false;


}
//---------------------------------------------------------------------------




void __fastcall TForm1::N3Click(TObject *Sender)
{ //меню перестановочный шифр
   Panel1->Visible = false;
   Panel2->Visible = true;
   Panel3->Visible = false;
   Panel4->Visible = false;
   Panel5->Visible = false;

   Panel2->Align = alClient;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N4Click(TObject *Sender)
{  //меню магический квадрат
   Panel1->Visible = false;
   Panel2->Visible = false;
   Panel3->Visible = true;
   Panel4->Visible = false;
   Panel5->Visible = false;

   Panel3->Align = alClient;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N5Click(TObject *Sender)
{
   Panel1->Visible = false;
   Panel2->Visible = false;
   Panel3->Visible = false;
   Panel4->Visible = true;
   Panel5->Visible = false;

   Panel4->Align = alClient;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
   Panel1->Visible = false;
   Panel2->Visible = false;
   Panel3->Visible = false;
   Panel4->Visible = false;
   Panel5->Visible = true;

   Panel5->Align = alClient;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::sButton1Click(TObject *Sender)
{
  string s1;
  int key;
  s1 = sEdit1->Text.c_str();
  key = StrToInt(sEdit2->Text.c_str());
  string s2 = Caesar_enc_decr(s1,key);
  sEdit3->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton2Click(TObject *Sender)
{
  string s1;
  int key;
  s1 = sEdit1->Text.c_str();
  key = StrToInt(sEdit2->Text.c_str());
  string s2 = Caesar_enc_decr(s1,-key);
  sEdit3->Text=s2.c_str();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::sButton3Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit5->Text.c_str();
  key = sEdit4->Text.c_str();
  string s2 = Perest_enc(s1,key);
  sEdit6->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton4Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit5->Text.c_str();
  key = sEdit4->Text.c_str();
  string s2 = Perest_decr(s1,key);
  sEdit6->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton5Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit7->Text.c_str();
  key = sEdit8->Text.c_str();
  string s2 = MagicSqr_enc(s1,key);
  sEdit9->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton6Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit7->Text.c_str();
  key = sEdit8->Text.c_str();
  string s2 = MagicSqr_decr(s1,key);
  sEdit9->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton7Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit10->Text.c_str();
  key = sEdit11->Text.c_str();
  string s2 = Polybius_enc(s1,key);
  sEdit12->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton8Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit10->Text.c_str();
  key = sEdit11->Text.c_str();
  string s2 = Polybius_decr(s1,key);
  sEdit12->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton9Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit13->Text.c_str();
  key = sEdit14->Text.c_str();
  string s2 = Gamma_enc_decr(s1,key,1);
  sEdit15->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton10Click(TObject *Sender)
{
  string s1, key;
  s1 = sEdit13->Text.c_str();
  key = sEdit14->Text.c_str();
  string s2 = Gamma_enc_decr(s1,key,-1);
  sEdit15->Text=s2.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
string msg = "Программа содержит 5 методов\n шифрования и дешифрования текста.\n Автор программы - Геннадий Акулов.";
MessageBox(Handle, msg.c_str(),
 Application->Title.c_str(), MB_OK | MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------




