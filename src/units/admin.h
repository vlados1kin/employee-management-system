//---------------------------------------------------------------------------

#ifndef adminH
#define adminH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmAdmin : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblHello;
	TButton *btnExit;
	TButton *btnInfo;
	TButton *btnTask;
	TButton *btnFinance;
	TButton *btnRole;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall btnInfoClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnTaskClick(TObject *Sender);
	void __fastcall btnFinanceClick(TObject *Sender);
	void __fastcall btnRoleClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmAdmin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAdmin *frmAdmin;
//---------------------------------------------------------------------------
#endif
