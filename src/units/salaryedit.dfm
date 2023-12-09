object frmSalaryEdit: TfrmSalaryEdit
  Left = 0
  Top = 0
  Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1079#1072#1088#1087#1083#1072#1090#1091
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  OnShow = FormShow
  TextHeight = 15
  object lblLogin: TLabel
    Left = 16
    Top = 19
    Width = 34
    Height = 15
    Caption = #1051#1086#1075#1080#1085
  end
  object lblDepartment: TLabel
    Left = 16
    Top = 48
    Width = 34
    Height = 15
    Caption = #1054#1090#1076#1077#1083
  end
  object lblPosition: TLabel
    Left = 16
    Top = 77
    Width = 64
    Height = 15
    Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
  end
  object lblMonth: TLabel
    Left = 16
    Top = 106
    Width = 36
    Height = 15
    Caption = #1052#1077#1089#1103#1094
  end
  object lblSalary: TLabel
    Left = 16
    Top = 135
    Width = 51
    Height = 15
    Caption = #1047#1072#1088#1087#1083#1072#1090#1072
  end
  object btnExit: TButton
    Left = 144
    Top = 176
    Width = 75
    Height = 25
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 0
    OnClick = btnExitClick
  end
  object editLogin: TEdit
    Left = 96
    Top = 16
    Width = 145
    Height = 23
    Enabled = False
    TabOrder = 1
  end
  object editDepartment: TEdit
    Left = 96
    Top = 45
    Width = 145
    Height = 23
    TabOrder = 2
  end
  object editPosition: TEdit
    Left = 96
    Top = 74
    Width = 145
    Height = 23
    TabOrder = 3
  end
  object cmbMonth: TComboBox
    Left = 96
    Top = 103
    Width = 145
    Height = 23
    Style = csDropDownList
    TabOrder = 4
  end
  object editSalary: TEdit
    Left = 96
    Top = 132
    Width = 145
    Height = 23
    NumbersOnly = True
    TabOrder = 5
  end
  object btnSave: TButton
    Left = 40
    Top = 176
    Width = 75
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 6
    OnClick = btnSaveClick
  end
end
