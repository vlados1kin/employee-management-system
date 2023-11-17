//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("main.cpp", frmMain);
USEFORM("units\user.cpp", frmUser);
USEFORM("units\admin.cpp", frmAdmin);
USEFORM("units\info.cpp", frmInfo);
USEFORM("units\edit.cpp", frmEdit);
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
