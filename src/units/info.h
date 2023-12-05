//---------------------------------------------------------------------------

#ifndef infoH
#define infoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmInfo : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *stgMain;
	TButton *btnAdd;
	TButton *btnDelete;
	TButton *btnEdit;
	TButton *btnExit;
	TComboBox *cmbSearch;
	TEdit *editSearch;
	TButton *btnSearch;
	TButton *btnClear;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnAddClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnDeleteClick(TObject *Sender);
	void __fastcall updateStringGrid();
	void __fastcall btnEditClick(TObject *Sender);
	void __fastcall search(std::string pole, std::string strForSearch);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall clearStringGrid();
	void __fastcall btnClearClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmInfo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmInfo *frmInfo;
//---------------------------------------------------------------------------
#endif
