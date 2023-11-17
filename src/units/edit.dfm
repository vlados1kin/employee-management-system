object frmEdit: TfrmEdit
  Left = 0
  Top = 0
  Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1077
  ClientHeight = 368
  ClientWidth = 277
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object lblLogin: TLabel
    Left = 77
    Top = 29
    Width = 34
    Height = 15
    Caption = #1051#1086#1075#1080#1085
  end
  object lblPassword: TLabel
    Left = 69
    Top = 58
    Width = 42
    Height = 15
    Caption = #1055#1072#1088#1086#1083#1100
  end
  object lblRole: TLabel
    Left = 84
    Top = 87
    Width = 27
    Height = 15
    Caption = #1056#1086#1083#1100
  end
  object lblFIO: TLabel
    Left = 84
    Top = 117
    Width = 27
    Height = 15
    Caption = #1060#1048#1054
  end
  object lblBirthdate: TLabel
    Left = 25
    Top = 149
    Width = 86
    Height = 15
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object lblEducation: TLabel
    Left = 36
    Top = 178
    Width = 75
    Height = 15
    Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
  end
  object lblInstitution: TLabel
    Left = 95
    Top = 207
    Width = 16
    Height = 15
    Caption = #1059#1054
  end
  object lblSpecialization: TLabel
    Left = 25
    Top = 236
    Width = 86
    Height = 15
    Caption = #1057#1087#1077#1094#1080#1072#1083#1080#1079#1072#1094#1080#1103
  end
  object lblGraduationYear: TLabel
    Left = 42
    Top = 265
    Width = 69
    Height = 15
    Caption = #1043#1086#1076' '#1074#1099#1087#1091#1089#1082#1072
  end
  object lblTelephone: TLabel
    Left = 63
    Top = 294
    Width = 48
    Height = 15
    Caption = #1058#1077#1083#1077#1092#1086#1085
  end
  object editLogin: TEdit
    Left = 117
    Top = 21
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object editPassword: TEdit
    Left = 117
    Top = 50
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object editRole: TEdit
    Left = 117
    Top = 79
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object editFIO: TEdit
    Left = 117
    Top = 109
    Width = 121
    Height = 23
    TabOrder = 3
  end
  object Edit5: TEdit
    Left = 117
    Top = 141
    Width = 121
    Height = 23
    TabOrder = 4
    Text = 'Edit1'
  end
  object editEducation: TEdit
    Left = 117
    Top = 170
    Width = 121
    Height = 23
    TabOrder = 5
  end
  object editInstitution: TEdit
    Left = 117
    Top = 199
    Width = 121
    Height = 23
    TabOrder = 6
  end
  object editSpecialization: TEdit
    Left = 117
    Top = 228
    Width = 121
    Height = 23
    TabOrder = 7
  end
  object editGraduationYear: TEdit
    Left = 117
    Top = 257
    Width = 121
    Height = 23
    NumbersOnly = True
    TabOrder = 8
  end
  object editTelephone: TEdit
    Left = 117
    Top = 286
    Width = 121
    Height = 23
    TabOrder = 9
  end
  object btnEnter: TButton
    Left = 25
    Top = 328
    Width = 96
    Height = 25
    Caption = #1043#1086#1090#1086#1074#1086
    TabOrder = 10
    OnClick = btnEnterClick
  end
  object btnExit: TButton
    Left = 142
    Top = 328
    Width = 96
    Height = 25
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 11
    OnClick = btnExitClick
  end
end
