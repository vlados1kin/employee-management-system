object frmAdmin: TfrmAdmin
  Left = 0
  Top = 0
  Caption = #1040#1076#1084#1080#1085#1080#1089#1090#1088#1072#1090#1086#1088
  ClientHeight = 234
  ClientWidth = 288
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object lblHello: TLabel
    Left = 16
    Top = 16
    Width = 249
    Height = 15
    Alignment = taCenter
    AutoSize = False
    Caption = #1044#1086#1073#1088#1086' '#1087#1086#1078#1072#1083#1086#1074#1072#1090#1100', '#1072#1076#1084#1080#1085#1080#1089#1090#1088#1072#1090#1086#1088'!'
  end
  object btnExit: TButton
    Left = 96
    Top = 196
    Width = 89
    Height = 25
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 0
    OnClick = btnExitClick
  end
  object btnInfo: TButton
    Left = 16
    Top = 56
    Width = 249
    Height = 25
    Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1077#1081' '#1086' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072#1093
    TabOrder = 1
    OnClick = btnInfoClick
  end
  object btnTask: TButton
    Left = 16
    Top = 87
    Width = 249
    Height = 25
    Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1089#1087#1080#1089#1086#1082' '#1079#1072#1076#1072#1095
    TabOrder = 2
  end
  object btnFinance: TButton
    Left = 16
    Top = 118
    Width = 249
    Height = 25
    Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1092#1080#1085#1072#1085#1089#1072#1084#1080
    TabOrder = 3
  end
  object btnRole: TButton
    Left = 16
    Top = 149
    Width = 249
    Height = 25
    Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1076#1086#1089#1090#1091#1087#1086#1084
    TabOrder = 4
  end
end
