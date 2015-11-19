//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTura *Tura;

        char p1,p2,p3,p4,p5,p6,p7,p8,p9;
        // Pola w grze p1='n' puste ; 'x' ; 'o'
        char kto;
        // Kogo tura, 'x' lub 'o'
        int punktyX = 0, punktyO =0;
        String px,po;
        int licznik = 0;


        void sprawdz(){
               licznik++;
               if  ((p1==p2 && p2==p3 && p1!='n') ||
                   (p4==p5 && p5==p6 && p4!='n') ||
                   (p7==p8 && p8==p9 && p7!='n') ||
                   (p1==p4 && p4==p7 && p1!='n') ||
                   (p2==p5 && p5==p8 && p2!='n') ||
                   (p3==p6 && p6==p9 && p3!='n') ||
                   (p1==p5 && p5==p9 && p1!='n') ||
                   (p3==p5 && p5==p7 && p3!='n')) {

                        char * w;
                        if (kto=='x'){
                         w = "Wygrywa kó³ko!";
                         licznik = 0;
                         punktyO++;
                        }else{
                        w = "Wygrywa krzy¿yk!";
                        licznik = 0;
                        punktyX++;
                        }
                        Application->MessageBox(w, "Koniec gry", MB_OK);
                        Tura->FormCreate(Tura);
                   }
                   if (licznik >= 9){
                        licznik = 0;

                        Application->MessageBox("REMIS", "Koniec gry", MB_OK);
                        Tura->FormCreate(Tura);
                   }
        }

//---------------------------------------------------------------------------
__fastcall TTura::TTura(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TTura::FormCreate(TObject *Sender)
{
        pole1->Picture->LoadFromFile("img/nic.bmp");
        pole2->Picture->LoadFromFile("img/nic.bmp");
        pole3->Picture->LoadFromFile("img/nic.bmp");
        pole4->Picture->LoadFromFile("img/nic.bmp");
        pole5->Picture->LoadFromFile("img/nic.bmp");
        pole6->Picture->LoadFromFile("img/nic.bmp");
        pole7->Picture->LoadFromFile("img/nic.bmp");
        pole8->Picture->LoadFromFile("img/nic.bmp");
        pole9->Picture->LoadFromFile("img/nic.bmp");
        Image1->Picture->LoadFromFile("img/osmall.bmp");
        Image2->Picture->LoadFromFile("img/osmall.bmp");
        Image3->Picture->LoadFromFile("img/xsmall.bmp");

        p1='n'; p4='n'; p7='n';
        p2='n'; p5='n'; p8='n';
        p3='n'; p6='n'; p9='n';
        kto = 'o';

        pole1->Enabled=true;
        pole2->Enabled=true;
        pole3->Enabled=true;
        pole4->Enabled=true;
        pole5->Enabled=true;
        pole6->Enabled=true;
        pole7->Enabled=true;
        pole8->Enabled=true;
        pole9->Enabled=true;

        Label2->Caption = punktyO;
        Label3->Caption = punktyX;
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole1Click(TObject *Sender)
{
        if (p1=='n')
        {
                if (kto =='o'){
                        pole1->Picture->LoadFromFile("img/o.bmp");
                        p1 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole1->Picture->LoadFromFile("img/x.bmp");
                        p1 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole1->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole2Click(TObject *Sender)
{
        if (p2=='n')
        {
                if (kto =='o'){
                        pole2->Picture->LoadFromFile("img/o.bmp");
                        p2 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole2->Picture->LoadFromFile("img/x.bmp");
                        p2 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole2->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole3Click(TObject *Sender)
{
        if (p3=='n')
        {
                if (kto =='o'){
                        pole3->Picture->LoadFromFile("img/o.bmp");
                        p3 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole3->Picture->LoadFromFile("img/x.bmp");
                        p3 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole3->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole4Click(TObject *Sender)
{

        if (p4=='n')
        {
                if (kto =='o'){
                        pole4->Picture->LoadFromFile("img/o.bmp");
                        p4 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole4->Picture->LoadFromFile("img/x.bmp");
                        p4 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole4->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole5Click(TObject *Sender)
{

        if (p5=='n')
        {
                if (kto =='o'){
                        pole5->Picture->LoadFromFile("img/o.bmp");
                        p5 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole5->Picture->LoadFromFile("img/x.bmp");
                        p5 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole5->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole6Click(TObject *Sender)
{

        if (p6=='n')
        {
                if (kto =='o'){
                        pole6->Picture->LoadFromFile("img/o.bmp");
                        p6 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole6->Picture->LoadFromFile("img/x.bmp");
                        p6 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole6->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole7Click(TObject *Sender)
{

        if (p7=='n')
        {
                if (kto =='o'){
                        pole7->Picture->LoadFromFile("img/o.bmp");
                        p7 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole7->Picture->LoadFromFile("img/x.bmp");
                        p7 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole7->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole8Click(TObject *Sender)
{

        if (p8=='n')
        {
                if (kto =='o'){
                        pole8->Picture->LoadFromFile("img/o.bmp");
                        p8 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole8->Picture->LoadFromFile("img/x.bmp");
                        p8 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole8->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TTura::pole9Click(TObject *Sender)
{

        if (p9=='n')
        {
                if (kto =='o'){
                        pole9->Picture->LoadFromFile("img/o.bmp");
                        p9 = kto;
                        kto = 'x';
                        Image1->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else {
                        pole9->Picture->LoadFromFile("img/x.bmp");
                        p9 = kto;
                        kto = 'o';
                        Image1->Picture->LoadFromFile("img/osmall.bmp");
                }
                  pole9->Enabled=false;
                  sprawdz();
        }
}
//---------------------------------------------------------------------------
