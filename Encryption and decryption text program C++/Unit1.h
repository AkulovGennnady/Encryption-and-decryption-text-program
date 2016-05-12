//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "sButton.hpp"
#include "acPNG.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TPanel *Panel1;
        TImage *Image1;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TImage *Image2;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TsEdit *sEdit3;
        TsButton *sButton1;
        TsButton *sButton2;
        TPanel *Panel2;
        TsEdit *sEdit5;
        TsEdit *sEdit4;
        TsLabel *sLabel3;
        TsLabel *sLabel4;
        TsButton *sButton3;
        TsButton *sButton4;
        TsEdit *sEdit6;
        TPanel *Panel3;
        TImage *Image3;
        TsLabel *sLabel5;
        TsLabel *sLabel6;
        TsEdit *sEdit7;
        TsEdit *sEdit8;
        TsButton *sButton5;
        TsButton *sButton6;
        TsEdit *sEdit9;
        TPanel *Panel4;
        TImage *Image5;
        TsLabel *sLabel7;
        TsLabel *sLabel8;
        TsEdit *sEdit10;
        TsEdit *sEdit11;
        TsButton *sButton7;
        TsButton *sButton8;
        TsEdit *sEdit12;
        TPanel *Panel5;
        TImage *Image6;
        TsLabel *sLabel9;
        TsLabel *sLabel10;
        TsEdit *sEdit13;
        TsEdit *sEdit14;
        TsButton *sButton9;
        TsButton *sButton10;
        TsEdit *sEdit15;
        TImage *Image4;
        TsLabel *sLabel11;
        TsLabel *sLabel12;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TsLabel *sLabel13;
        TsLabel *sLabel15;
        TsLabel *sLabel14;
        TsLabel *sLabel16;
        TsLabel *sLabel17;
        void __fastcall N2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall sButton2Click(TObject *Sender);
        void __fastcall sButton3Click(TObject *Sender);
        void __fastcall sButton4Click(TObject *Sender);
        void __fastcall sButton5Click(TObject *Sender);
        void __fastcall sButton6Click(TObject *Sender);
        void __fastcall sButton7Click(TObject *Sender);
        void __fastcall sButton8Click(TObject *Sender);
        void __fastcall sButton9Click(TObject *Sender);
        void __fastcall sButton10Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
