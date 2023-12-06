//---------------------------------------------------------------------------

#ifndef taskeditH
#define taskeditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmTaskEdit : public TForm
{
__published:	// IDE-managed Components
	TButton *btnExit;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmTaskEdit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTaskEdit *frmTaskEdit;
//---------------------------------------------------------------------------
#endif
