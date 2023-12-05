//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("units\admin.cpp", frmAdmin);
USEFORM("units\edit.cpp", frmEdit);
USEFORM("units\info.cpp", frmInfo);
USEFORM("units\user.cpp", frmUser);
USEFORM("main.cpp", frmMain);
USEFORM("units\task.cpp", frmTask);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TfrmMain), &frmMain);
		Application->CreateForm(__classid(TfrmUser), &frmUser);
		Application->CreateForm(__classid(TfrmAdmin), &frmAdmin);
		Application->CreateForm(__classid(TfrmInfo), &frmInfo);
		Application->CreateForm(__classid(TfrmEdit), &frmEdit);
		Application->CreateForm(__classid(TfrmTask), &frmTask);
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
