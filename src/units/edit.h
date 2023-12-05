//---------------------------------------------------------------------------

#ifndef editH
#define editH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TfrmEdit : public TForm
{
__published:	// IDE-managed Components
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
	TEdit *editLogin;
	TEdit *editPassword;
	TEdit *editFIO;
	TEdit *editEducation;
	TEdit *editInstitution;
	TEdit *editSpecialization;
	TEdit *editGraduationYear;
	TEdit *editTelephone;
	TButton *btnEnter;
	TButton *btnExit;
	TMaskEdit *editBirthdate;
	TComboBox *boxRole;
	void __fastcall btnEnterClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
    void __fastcall updateForm();
private:	// User declarations
public:		// User declarations
	__fastcall TfrmEdit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmEdit *frmEdit;
//---------------------------------------------------------------------------
#endif
