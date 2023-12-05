object frmMain: TfrmMain
  Left = 0
  Top = 0
  Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1086#1074' '#1087#1088#1077#1076#1087#1088#1080#1103#1090#1080#1103
  ClientHeight = 120
  ClientWidth = 296
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object lblLogin: TLabel
    Left = 16
    Top = 19
    Width = 34
    Height = 15
    Caption = #1051#1086#1075#1080#1085
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object lblPassword: TLabel
    Left = 16
    Top = 48
    Width = 42
    Height = 15
    Caption = #1055#1072#1088#1086#1083#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object editLogin: TEdit
    Left = 64
    Top = 16
    Width = 177
    Height = 23
    TabOrder = 0
  end
  object btnEnter: TButton
    Left = 16
    Top = 82
    Width = 107
    Height = 25
    Caption = #1042#1086#1081#1090#1080
    TabOrder = 1
    OnClick = btnEnterClick
  end
  object btnExit: TButton
    Left = 129
    Top = 82
    Width = 112
    Height = 25
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 2
    OnClick = btnExitClick
  end
  object btnShow: TButton
    Left = 257
    Top = 45
    Width = 26
    Height = 23
    Caption = 'S'
    TabOrder = 3
    OnClick = btnShowClick
  end
  object editPassword: TEdit
    Left = 64
    Top = 45
    Width = 177
    Height = 23
    PasswordChar = '*'
    TabOrder = 4
    OnKeyPress = editPasswordKeyPress
  end
end
