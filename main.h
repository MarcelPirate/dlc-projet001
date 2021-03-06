//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TFicheEditeur : public TForm
{
__published:	// Composants gérés par l'EDI
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TMemo *Memo1;
        TMemo *Memo2;
        TLabel *Label4;
        TLabel *Label5;
        TPopupMenu *PopupMenu1;
        TPopupMenu *PopupMenu2;
        TMenuItem *Canada1;
        TMenuItem *France1;
        TMenuItem *Jrusalem1;
        TMenuItem *Brzil1;
        TPopupMenu *PopupMenu4;
        TLabel *Label6;
        TLabel *Label7;
        TMenuItem *Janvier1;
        TMenuItem *Fvrier1;
        TMenuItem *Mars1;
        TMenuItem *Avril1;
        TMenuItem *May1;
        TMenuItem *Juin1;
        TMenuItem *Aout1;
        TMenuItem *Aout2;
        TMenuItem *Septembre1;
        TMenuItem *Octobre1;
        TMenuItem *Novembre1;
        TMenuItem *Dcembre1;
        TMemo *Memo3;
        TMemo *Memo4;
private:	// Déclarations de l'utilisateur
public:		// Déclarations de l'utilisateur
        __fastcall TFicheEditeur(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFicheEditeur *FicheEditeur;
//---------------------------------------------------------------------------
#endif
