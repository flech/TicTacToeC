//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TTura : public TForm
{
__published:	// IDE-managed Components
        TImage *pole1;
        TImage *pole2;
        TImage *pole3;
        TImage *pole4;
        TImage *pole5;
        TImage *pole6;
        TImage *pole7;
        TImage *pole8;
        TImage *pole9;
        TLabel *Label1;
        TImage *Image1;
        TBitBtn *BitBtn1;
        TImage *Image2;
        TImage *Image3;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall pole1Click(TObject *Sender);
        void __fastcall pole2Click(TObject *Sender);
        void __fastcall pole3Click(TObject *Sender);
        void __fastcall pole4Click(TObject *Sender);
        void __fastcall pole5Click(TObject *Sender);
        void __fastcall pole6Click(TObject *Sender);
        void __fastcall pole7Click(TObject *Sender);
        void __fastcall pole8Click(TObject *Sender);
        void __fastcall pole9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TTura(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTura *Tura;
//---------------------------------------------------------------------------
#endif
