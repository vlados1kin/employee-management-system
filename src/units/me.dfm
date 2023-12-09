object frmMe: TfrmMe
  Left = 0
  Top = 0
  Caption = #1054#1073#1086' '#1084#1085#1077
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
  object lblTLogin: TLabel
    Left = 8
    Top = 8
    Width = 34
    Height = 15
    Caption = #1051#1086#1075#1080#1085
  end
  object lblTPassword: TLabel
    Left = 8
    Top = 29
    Width = 42
    Height = 15
    Caption = #1055#1072#1088#1086#1083#1100
  end
  object lblTRole: TLabel
    Left = 8
    Top = 50
    Width = 27
    Height = 15
    Caption = #1056#1086#1083#1100
  end
  object lblTFIO: TLabel
    Left = 8
    Top = 71
    Width = 27
    Height = 15
    Caption = #1060#1048#1054
  end
  object lblTBirthdate: TLabel
    Left = 8
    Top = 92
    Width = 86
    Height = 15
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object lblTEducation: TLabel
    Left = 8
    Top = 113
    Width = 75
    Height = 15
    Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
  end
  object lblTInstitution: TLabel
    Left = 8
    Top = 134
    Width = 16
    Height = 15
    Caption = #1059#1054
  end
  object lblTSpecialization: TLabel
    Left = 8
    Top = 155
    Width = 86
    Height = 15
    Caption = #1057#1087#1077#1094#1080#1072#1083#1080#1079#1072#1094#1080#1103
  end
  object lblTGraduationYear: TLabel
    Left = 8
    Top = 176
    Width = 82
    Height = 15
    Caption = #1043#1086#1076' '#1086#1082#1086#1085#1095#1072#1085#1080#1103
  end
  object lblTTelephone: TLabel
    Left = 8
    Top = 197
    Width = 48
    Height = 15
    Caption = #1058#1077#1083#1077#1092#1086#1085
  end
  object lblLogin: TLabel
    Left = 112
    Top = 8
    Width = 43
    Height = 15
    Caption = 'lblLogin'
  end
  object lblPassword: TLabel
    Left = 112
    Top = 29
    Width = 63
    Height = 15
    Caption = 'lblPassword'
  end
  object lblRole: TLabel
    Left = 112
    Top = 50
    Width = 36
    Height = 15
    Caption = 'lblRole'
  end
  object lblFIO: TLabel
    Left = 112
    Top = 71
    Width = 32
    Height = 15
    Caption = 'lblFIO'
  end
  object lblBirthdate: TLabel
    Left = 112
    Top = 92
    Width = 61
    Height = 15
    Caption = 'lblBirthdate'
  end
  object lblEducation: TLabel
    Left = 112
    Top = 113
    Width = 66
    Height = 15
    Caption = 'lblEducation'
  end
  object lblInstitution: TLabel
    Left = 113
    Top = 134
    Width = 68
    Height = 15
    Caption = 'lblInstitution'
  end
  object lblSpecialization: TLabel
    Left = 113
    Top = 155
    Width = 87
    Height = 15
    Caption = 'lblSpecialization'
  end
  object lblGraduationYear: TLabel
    Left = 113
    Top = 176
    Width = 94
    Height = 15
    Caption = 'lblGraduationYear'
  end
  object lblTelephone: TLabel
    Left = 112
    Top = 197
    Width = 68
    Height = 15
    Caption = 'lblTelephone'
  end
  object btnEdit: TButton
    Left = 8
    Top = 226
    Width = 75
    Height = 23
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    TabOrder = 0
    Visible = False
    OnClick = btnEditClick
  end
  object btnExit: TButton
    Left = 113
    Top = 226
    Width = 75
    Height = 23
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 1
    OnClick = btnExitClick
  end
end
