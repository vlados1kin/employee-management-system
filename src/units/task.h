//---------------------------------------------------------------------------

#ifndef taskH
#define taskH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmTask : public TForm
{
__published:	// IDE-managed Components
	TComboBox *cmbSearch;
	TLabel *lblSearch;
	TButton *btnSearch;
	TButton *btnExit;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmTask(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTask *frmTask;
//---------------------------------------------------------------------------
#endif
