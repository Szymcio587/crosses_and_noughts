//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
char p1,p2,p3,p4,p5,p6,p7,p8,p9;
char kto;

void sprawdz()
{
   if((p1==p2 && p2==p3 && p1!='n') ||
   (p4==p5 && p5==p6 && p4!='n') ||
   (p7==p8 && p8==p9 && p7!='n') ||
   (p1==p4 && p4==p7 && p1!='n') ||
   (p2==p5 && p5==p8 && p2!='n') ||
   (p3==p6 && p6==p9 && p3!='n') ||
   (p1==p5 && p5==p9 && p9!='n') ||
   (p3==p5 && p5==p7 && p7!='n'))
   {
    char*w;
    if(kto=='x')w="Wygrywa kó³ko!";
    else w="Wygrywa krzy¿yk!";

    Application->MessageBox(w,"Koniec Gry",MB_OK);
   }

   if(p1!='n' &&
   p2!='n' &&
   p3!='n' &&
   p4!='n' &&
   p5!='n' &&
   p6!='n' &&
   p7!='n' &&
   p8!='n' &&
   p9!='n')

   Application->MessageBox("Remis!","Koniec Gry",MB_OK);
}
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
     Image1->Picture->LoadFromFile("P.bmp");
     Image2->Picture->LoadFromFile("P.bmp");
     Image3->Picture->LoadFromFile("P.bmp");
     Image4->Picture->LoadFromFile("P.bmp");
     Image5->Picture->LoadFromFile("P.bmp");
     Image6->Picture->LoadFromFile("P.bmp");
     Image7->Picture->LoadFromFile("P.bmp");
     Image8->Picture->LoadFromFile("P.bmp");
     Image9->Picture->LoadFromFile("P.bmp");
     Image10->Picture->LoadFromFile("MK.bmp");

     p1='n';
     p2='n';
     p3='n';
     p4='n';
     p5='n';
     p6='n';
     p7='n';
     p8='n';
     p9='n';

     kto='o';

     Image1->Enabled=true;
     Image2->Enabled=true;
     Image3->Enabled=true;
     Image4->Enabled=true;
     Image5->Enabled=true;
     Image6->Enabled=true;
     Image7->Enabled=true;
     Image8->Enabled=true;
     Image9->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
    if(p1=='n')
    {
      if(kto=='o')
      {
        Image1->Picture->LoadFromFile("K.bmp");
        p1='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image1->Picture->LoadFromFile("C.bmp");
        p1='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image1->Enabled=false;
      sprawdz();
    }



}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image2Click(TObject *Sender)
{
  if(p2=='n')
    {
      if(kto=='o')
      {
        Image2->Picture->LoadFromFile("K.bmp");
        p2='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image2->Picture->LoadFromFile("C.bmp");
        p2='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image2->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
   if(p3=='n')
    {
      if(kto=='o')
      {
        Image3->Picture->LoadFromFile("K.bmp");
        p3='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image3->Picture->LoadFromFile("C.bmp");
        p3='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image3->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
  if(p4=='n')
    {
      if(kto=='o')
      {
        Image4->Picture->LoadFromFile("K.bmp");
        p4='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image4->Picture->LoadFromFile("C.bmp");
        p4='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image4->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
  if(p5=='n')
    {
      if(kto=='o')
      {
        Image5->Picture->LoadFromFile("K.bmp");
        p5='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image5->Picture->LoadFromFile("C.bmp");
        p5='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image5->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
   if(p6=='n')
    {
      if(kto=='o')
      {
        Image6->Picture->LoadFromFile("K.bmp");
        p6='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image6->Picture->LoadFromFile("C.bmp");
        p6='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image6->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
    if(p7=='n')
    {
      if(kto=='o')
      {
        Image7->Picture->LoadFromFile("K.bmp");
        p7='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image7->Picture->LoadFromFile("C.bmp");
        p7='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image7->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
    if(p8=='n')
    {
      if(kto=='o')
      {
        Image8->Picture->LoadFromFile("K.bmp");
        p8='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image8->Picture->LoadFromFile("C.bmp");
        p8='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image8->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
   if(p9=='n')
    {
      if(kto=='o')
      {
        Image9->Picture->LoadFromFile("K.bmp");
        p9='o';
        kto='x';
        Image10->Picture->LoadFromFile("MC.bmp");
      }
      else
      {
        Image9->Picture->LoadFromFile("C.bmp");
        p9='x';
        kto='o';
        Image10->Picture->LoadFromFile("MK.bmp");
      }
      Image9->Enabled=false;
      sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   if(Application->MessageBox("Czy na pewno chcesz wyjœæ z gry?","PotwierdŸ",
   MB_YESNO | MB_ICONQUESTION)==IDYES)
   Application->Terminate();
}
//---------------------------------------------------------------------------

