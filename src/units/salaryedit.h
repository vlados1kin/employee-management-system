//---------------------------------------------------------------------------

#ifndef salaryeditH
#define salaryeditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmSalaryEdit : public TForm
{
__published:	// IDE-managed Components
	TButton *btnExit;
	TEdit *editLogin;
	TEdit *editDepartment;
	TEdit *editPosition;
	TComboBox *cmbMonth;
	TEdit *editSalary;
	TLabel *lblLogin;
	TLabel *lblDepartment;
	TLabel *lblPosition;
	TLabel *lblMonth;
	TLabel *lblSalary;
	TButton *btnSave;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall Update();
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmSalaryEdit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSalaryEdit *frmSalaryEdit;
//---------------------------------------------------------------------------
#endif
