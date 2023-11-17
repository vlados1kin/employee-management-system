object frmInfo: TfrmInfo
  Left = 0
  Top = 0
  Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072#1093
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object StringGrid1: TStringGrid
    Left = 8
    Top = 40
    Width = 593
    Height = 265
    TabOrder = 0
  end
  object btnAdd: TButton
    Left = 8
    Top = 9
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 1
    OnClick = btnAddClick
  end
  object btnDelete: TButton
    Left = 89
    Top = 9
    Width = 75
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 2
  end
  object btnEdit: TButton
    Left = 170
    Top = 9
    Width = 75
    Height = 25
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    TabOrder = 3
  end
  object btnSave: TButton
    Left = 251
    Top = 9
    Width = 75
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 4
  end
  object btnExit: TButton
    Left = 332
    Top = 9
    Width = 75
    Height = 25
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 5
    OnClick = btnExitClick
  end
end
