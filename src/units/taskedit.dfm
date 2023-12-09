object frmTaskEdit: TfrmTaskEdit
  Left = 0
  Top = 0
  Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1089#1087#1080#1089#1086#1082' '#1079#1072#1076#1072#1095
  ClientHeight = 367
  ClientWidth = 276
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
    Left = 64
    Top = 25
    Width = 34
    Height = 15
    Caption = #1051#1086#1075#1080#1085
  end
  object lblDescription: TLabel
    Left = 43
    Top = 152
    Width = 55
    Height = 15
    Caption = #1054#1087#1080#1089#1072#1085#1080#1077
  end
  object lblCompleted: TLabel
    Left = 35
    Top = 284
    Width = 63
    Height = 15
    Caption = #1047#1072#1074#1077#1088#1096#1077#1085#1086
  end
  object lblDate: TLabel
    Left = 72
    Top = 59
    Width = 26
    Height = 15
    Caption = #1044#1072#1090#1072
  end
  object lblStart: TLabel
    Left = 56
    Top = 88
    Width = 42
    Height = 15
    Caption = #1053#1072#1095#1072#1083#1086
  end
  object lblEnd: TLabel
    Left = 36
    Top = 117
    Width = 62
    Height = 15
    Caption = #1054#1082#1086#1085#1095#1072#1085#1080#1077
  end
  object btnExit: TButton
    Left = 137
    Top = 325
    Width = 96
    Height = 26
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 0
    OnClick = btnExitClick
  end
  object editLogin: TEdit
    Left = 112
    Top = 22
    Width = 121
    Height = 23
    Enabled = False
    TabOrder = 1
  end
  object editDate: TMaskEdit
    Left = 112
    Top = 56
    Width = 120
    Height = 23
    EditMask = '!0000/99/99;0;_'
    MaxLength = 10
    TabOrder = 2
    Text = ''
  end
  object editStart: TMaskEdit
    Left = 112
    Top = 85
    Width = 118
    Height = 23
    EditMask = '!90:00;0;_'
    MaxLength = 5
    TabOrder = 3
    Text = ''
  end
  object editEnd: TMaskEdit
    Left = 112
    Top = 117
    Width = 118
    Height = 23
    EditMask = '!90:00;0;_'
    MaxLength = 5
    TabOrder = 4
    Text = ''
  end
  object cbxCompleted: TCheckBox
    Left = 112
    Top = 284
    Width = 121
    Height = 17
    TabOrder = 5
  end
  object btnSave: TButton
    Left = 35
    Top = 325
    Width = 96
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 6
    OnClick = btnSaveClick
  end
  object editDescription: TMemo
    Left = 112
    Top = 152
    Width = 120
    Height = 126
    Lines.Strings = (
      'editDescription')
    TabOrder = 7
  end
end
