//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("units\salaryedit.cpp", frmSalaryEdit);
USEFORM("units\salary.cpp", frmSalary);
USEFORM("units\me.cpp", frmMe);
USEFORM("units\taskedit.cpp", frmTaskEdit);
USEFORM("units\task.cpp", frmTask);
USEFORM("units\info.cpp", frmInfo);
USEFORM("main.cpp", frmMain);
USEFORM("units\edit.cpp", frmEdit);
USEFORM("units\admin.cpp", frmAdmin);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TfrmMain), &frmMain);
		Application->CreateForm(__classid(TfrmAdmin), &frmAdmin);
		Application->CreateForm(__classid(TfrmInfo), &frmInfo);
		Application->CreateForm(__classid(TfrmEdit), &frmEdit);
		Application->CreateForm(__classid(TfrmTask), &frmTask);
		Application->CreateForm(__classid(TfrmTaskEdit), &frmTaskEdit);
		Application->CreateForm(__classid(TfrmMe), &frmMe);
		Application->CreateForm(__classid(TfrmSalary), &frmSalary);
		Application->CreateForm(__classid(TfrmSalaryEdit), &frmSalaryEdit);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
