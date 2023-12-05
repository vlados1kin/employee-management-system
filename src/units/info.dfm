object frmInfo: TfrmInfo
  Left = 0
  Top = 0
  Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072#1093
  ClientHeight = 433
  ClientWidth = 1040
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  OnShow = FormShow
  TextHeight = 15
  object stgMain: TStringGrid
    Left = 8
    Top = 40
    Width = 1017
    Height = 385
    Align = alCustom
    ColCount = 10
    DoubleBuffered = False
    FixedCols = 0
    RowCount = 3
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing, goRowSelect, goFixedRowDefAlign]
    ParentDoubleBuffered = False
    TabOrder = 0
    ColWidths = (
      64
      82
      71
      174
      86
      103
      132
      97
      76
      120)
  end
  object btnAdd: TButton
    Left = 8
    Top = 11
    Width = 75
    Height = 23
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 1
    OnClick = btnAddClick
  end
  object btnDelete: TButton
    Left = 89
    Top = 11
    Width = 75
    Height = 23
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 2
    OnClick = btnDeleteClick
  end
  object btnEdit: TButton
    Left = 170
    Top = 11
    Width = 75
    Height = 23
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    TabOrder = 3
    OnClick = btnEditClick
  end
  object btnExit: TButton
    Left = 332
    Top = 11
    Width = 75
    Height = 23
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 4
    OnClick = btnExitClick
  end
  object cmbSearch: TComboBox
    Left = 413
    Top = 11
    Width = 145
    Height = 23
    Style = csDropDownList
    TabOrder = 5
  end
  object editSearch: TEdit
    Left = 564
    Top = 11
    Width = 121
    Height = 23
    TabOrder = 6
  end
  object btnSearch: TButton
    Left = 251
    Top = 11
    Width = 75
    Height = 23
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 7
    OnClick = btnSearchClick
  end
  object btnClear: TButton
    Left = 950
    Top = 12
    Width = 75
    Height = 22
    Caption = #1054#1073#1085#1086#1074#1080#1090#1100
    TabOrder = 8
    OnClick = btnClearClick
  end
end
