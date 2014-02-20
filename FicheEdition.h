//---------------------------------------------------------------------------

#ifndef FicheEditionH
#define FicheEditionH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TFicheEditeur : public TForm
{
__published:	// Composants g�r�s par l'EDI
        TMemo *Memo1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TMainMenu *MainMenu1;
        TComboBox *ComboBox1;
        TLabel *Label4;
        TMemo *Memo2;
        TLabel *Label5;
        TButton *Date;
        void __fastcall DateClick(TObject *Sender);
private:	// D�clarations de l'utilisateur
public:		// D�clarations de l'utilisateur
        __fastcall TFicheEditeur(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFicheEditeur *FicheEditeur;
//---------------------------------------------------------------------------
#endif
