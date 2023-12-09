//---------------------------------------------------------------------------

#ifndef taskeditH
#define taskeditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TfrmTaskEdit : public TForm
{
__published:	// IDE-managed Components
	TButton *btnExit;
	TLabel *lblLogin;
	TEdit *editLogin;
	TLabel *lblDescription;
	TLabel *lblCompleted;
	TLabel *lblDate;
	TLabel *lblStart;
	TLabel *lblEnd;
	TMaskEdit *editDate;
	TMaskEdit *editStart;
	TMaskEdit *editEnd;
	TCheckBox *cbxCompleted;
	TButton *btnSave;
	TMemo *editDescription;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Update();
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmTaskEdit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTaskEdit *frmTaskEdit;
//---------------------------------------------------------------------------
#endif
