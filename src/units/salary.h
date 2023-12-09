//---------------------------------------------------------------------------

#ifndef salaryH
#define salaryH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmSalary : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblSearch;
	TLabel *lblEmployee;
	TLabel *lblFIO;
	TComboBox *cmbSearch;
	TButton *btnSearch;
	TButton *btnExit;
	TStringGrid *stgMain;
	TButton *btnAdd;
	TButton *btnDelete;
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall update(std::string login);
	void __fastcall clear();
	void __fastcall btnAddClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnDeleteClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmSalary(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSalary *frmSalary;
//---------------------------------------------------------------------------
#endif
