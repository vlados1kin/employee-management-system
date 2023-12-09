//---------------------------------------------------------------------------

#ifndef taskH
#define taskH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmTask : public TForm
{
__published:	// IDE-managed Components
	TComboBox *cmbSearch;
	TLabel *lblSearch;
	TButton *btnSearch;
	TButton *btnExit;
	TLabel *lblEmployee;
	TLabel *lblFIO;
	TStringGrid *stgMain;
	TButton *btnAdd;
	TButton *btnDelete;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall update(std::string login);
	void __fastcall clear();
	void __fastcall btnAddClick(TObject *Sender);
	void __fastcall btnEditClick(TObject *Sender);
	void __fastcall btnDeleteClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmTask(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTask *frmTask;
//---------------------------------------------------------------------------
#endif
