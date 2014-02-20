//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FicheEdition.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFicheEditeur *FicheEditeur;
//---------------------------------------------------------------------------
__fastcall TFicheEditeur::TFicheEditeur(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFicheEditeur::DateClick(TObject *Sender)
{
Date->Caption = DateToStr(Date());

}
//---------------------------------------------------------------------------


