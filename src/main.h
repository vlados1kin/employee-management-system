//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblLogin;
	TLabel *lblPassword;
	TEdit *editLogin;
	TButton *btnEnter;
	TButton *btnExit;
	TButton *btnShow;
	TEdit *editPassword;
	void __fastcall btnEnterClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall btnShowClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall editPasswordKeyPress(TObject *Sender, System::WideChar &Key);
    void __fastcall nextForm();
private:	// User declarations
public:		// User declarations
	__fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
