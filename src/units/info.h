//---------------------------------------------------------------------------

#ifndef infoH
#define infoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmInfo : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *btnAdd;
	TButton *btnDelete;
	TButton *btnEdit;
	TButton *btnSave;
	TButton *btnExit;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnAddClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmInfo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmInfo *frmInfo;
//---------------------------------------------------------------------------
#endif
