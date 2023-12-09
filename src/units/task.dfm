object frmTask: TfrmTask
  Left = 0
  Top = 0
  Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1089#1087#1080#1089#1082#1086#1084' '#1076#1077#1083
  ClientHeight = 433
  ClientWidth = 879
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  OnShow = FormShow
  DesignSize = (
    879
    433)
  TextHeight = 15
  object lblSearch: TLabel
    Left = 8
    Top = 16
    Width = 100
    Height = 15
    Alignment = taCenter
    Anchors = [akBottom]
    Caption = #1051#1086#1075#1080#1085' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  end
  object lblEmployee: TLabel
    Left = 8
    Top = 66
    Width = 27
    Height = 15
    Anchors = [akBottom]
    Caption = #1060#1048#1054
  end
  object lblFIO: TLabel
    Left = 56
    Top = 66
    Width = 3
    Height = 15
  end
  object cmbSearch: TComboBox
    Left = 8
    Top = 37
    Width = 217
    Height = 23
    Style = csDropDownList
    TabOrder = 0
  end
  object btnSearch: TButton
    Left = 8
    Top = 116
    Width = 217
    Height = 23
    Caption = #1053#1072#1081#1090#1080
    TabOrder = 1
    OnClick = btnSearchClick
  end
  object btnExit: TButton
    Left = 8
    Top = 145
    Width = 217
    Height = 23
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 2
    OnClick = btnExitClick
  end
  object stgMain: TStringGrid
    Left = 231
    Top = 37
    Width = 640
    Height = 388
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing, goRowSelect, goFixedRowDefAlign]
    TabOrder = 3
    ColWidths = (
      64
      93
      136
      265
      276)
  end
  object btnAdd: TButton
    Left = 8
    Top = 87
    Width = 106
    Height = 23
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 4
    OnClick = btnAddClick
  end
  object btnDelete: TButton
    Left = 120
    Top = 87
    Width = 105
    Height = 23
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 5
    OnClick = btnDeleteClick
  end
end
