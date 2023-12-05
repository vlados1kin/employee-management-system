object frmTask: TfrmTask
  Left = 0
  Top = 0
  Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1089#1087#1080#1089#1082#1086#1084' '#1076#1077#1083
  ClientHeight = 433
  ClientWidth = 1055
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  DesignSize = (
    1055
    433)
  TextHeight = 15
  object lblSearch: TLabel
    Left = 8
    Top = 16
    Width = 145
    Height = 15
    Alignment = taCenter
    Anchors = [akBottom]
    Caption = #1060#1048#1054' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  end
  object cmbSearch: TComboBox
    Left = 8
    Top = 37
    Width = 145
    Height = 23
    Style = csDropDownList
    TabOrder = 0
  end
  object btnSearch: TButton
    Left = 8
    Top = 66
    Width = 145
    Height = 23
    Caption = #1053#1072#1081#1090#1080
    TabOrder = 1
  end
  object btnExit: TButton
    Left = 232
    Top = 216
    Width = 75
    Height = 25
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 2
    OnClick = btnExitClick
  end
end
