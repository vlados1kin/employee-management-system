//---------------------------------------------------------------------------

#ifndef meH
#define meH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmMe : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblTLogin;
	TLabel *lblTPassword;
	TLabel *lblTRole;
	TLabel *lblTFIO;
	TLabel *lblTBirthdate;
	TLabel *lblTEducation;
	TLabel *lblTInstitution;
	TLabel *lblTSpecialization;
	TLabel *lblTGraduationYear;
	TLabel *lblTTelephone;
	TLabel *lblLogin;
	TLabel *lblPassword;
	TLabel *lblRole;
	TLabel *lblFIO;
	TLabel *lblBirthdate;
	TLabel *lblEducation;
	TLabel *lblInstitution;
	TLabel *lblSpecialization;
	TLabel *lblGraduationYear;
	TLabel *lblTelephone;
	TButton *btnEdit;
	TButton *btnExit;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnEditClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmMe(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMe *frmMe;
//---------------------------------------------------------------------------
#endif
