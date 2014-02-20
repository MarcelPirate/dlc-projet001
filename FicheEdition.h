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
class TForm2 : public TForm
{
__published:	// Composants g�r�s par l'EDI
        TListBox *ListBox1;
        TListBox *ListBox2;
        TListBox *ListBox3;
        TMemo *Memo1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
private:	// D�clarations de l'utilisateur
public:		// D�clarations de l'utilisateur
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
