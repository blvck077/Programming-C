object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 341
  ClientWidth = 642
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Name: TLabel
    Left = 47
    Top = 32
    Width = 19
    Height = 13
    Caption = #1048#1084#1103
  end
  object Label2: TLabel
    Left = 10
    Top = 59
    Width = 60
    Height = 13
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076'.'
  end
  object Passport: TLabel
    Left = 32
    Top = 86
    Width = 42
    Height = 13
    Caption = #1055#1072#1089#1087#1086#1088#1090
  end
  object Insurance: TLabel
    Left = 15
    Top = 113
    Width = 55
    Height = 13
    Caption = #1057#1090#1088#1072#1093#1086#1074#1082#1072
  end
  object Label5: TLabel
    Left = 10
    Top = 140
    Width = 67
    Height = 13
    Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
  end
  object Label6: TLabel
    Left = 15
    Top = 167
    Width = 57
    Height = 13
    Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
  end
  object Label7: TLabel
    Left = 20
    Top = 194
    Width = 48
    Height = 13
    Caption = #1047#1072#1088#1087#1083#1072#1090#1072
  end
  object Label8: TLabel
    Left = 30
    Top = 221
    Width = 31
    Height = 13
    Caption = #1055#1088#1080#1105#1084
  end
  object Label9: TLabel
    Left = 10
    Top = 248
    Width = 67
    Height = 13
    Caption = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1081
  end
  object Name1: TEdit
    Left = 80
    Top = 29
    Width = 145
    Height = 21
    TabOrder = 0
    Text = #1042#1072#1089#1080#1083#1080#1081
  end
  object Passport1: TEdit
    Left = 80
    Top = 83
    Width = 145
    Height = 21
    TabOrder = 1
    Text = #1050#1053'2587654'
  end
  object Insurance1: TEdit
    Left = 80
    Top = 110
    Width = 145
    Height = 21
    TabOrder = 2
    Text = '1231254'
  end
  object Education1: TEdit
    Left = 80
    Top = 137
    Width = 145
    Height = 21
    TabOrder = 3
    Text = #1042#1099#1089#1096#1077#1077
  end
  object Post1: TEdit
    Left = 80
    Top = 164
    Width = 145
    Height = 21
    TabOrder = 4
    Text = #1052#1077#1085#1077#1076#1078#1077#1088
  end
  object Salary1: TEdit
    Left = 80
    Top = 191
    Width = 145
    Height = 21
    TabOrder = 5
    Text = '1400'
  end
  object Notes1: TEdit
    Left = 80
    Top = 245
    Width = 145
    Height = 21
    TabOrder = 6
    Text = #1055#1088#1080#1084#1077#1088#1085#1099#1081' '#1088#1072#1073#1086#1090#1085#1080#1082'.'
  end
  object Birthday1: TDateTimePicker
    Left = 80
    Top = 56
    Width = 145
    Height = 21
    Date = 32030.000000000000000000
    Time = 0.763088842591969300
    TabOrder = 7
  end
  object Hiring1: TDateTimePicker
    Left = 80
    Top = 218
    Width = 145
    Height = 21
    Date = 42689.000000000000000000
    Time = 0.765645324070646900
    TabOrder = 8
  end
  object Memo1: TMemo
    Left = 240
    Top = 29
    Width = 217
    Height = 299
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 9
  end
  object ComboBox1: TComboBox
    Left = 472
    Top = 164
    Width = 145
    Height = 21
    TabOrder = 10
  end
  object Add: TButton
    Left = 8
    Top = 272
    Width = 105
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 11
    OnClick = AddClick
  end
  object Elder: TButton
    Left = 119
    Top = 303
    Width = 105
    Height = 25
    Caption = #1055#1077#1085#1089#1080#1086#1085#1077#1088#1099
    TabOrder = 12
    OnClick = ElderClick
  end
  object StaticText1: TStaticText
    Left = 472
    Top = 141
    Width = 70
    Height = 17
    Caption = #1055#1077#1085#1089#1080#1086#1085#1077#1088#1099':'
    TabOrder = 13
  end
  object Delete: TButton
    Left = 472
    Top = 191
    Width = 145
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 14
    OnClick = DeleteClick
  end
  object DeleteFills: TButton
    Left = 8
    Top = 303
    Width = 105
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1087#1086#1083#1103
    TabOrder = 15
    OnClick = DeleteFillsClick
  end
  object Display: TButton
    Left = 119
    Top = 272
    Width = 105
    Height = 25
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074#1089#1077#1093
    TabOrder = 16
    OnClick = DisplayClick
  end
  object ComboBox2: TComboBox
    Left = 472
    Top = 29
    Width = 145
    Height = 21
    TabOrder = 17
  end
  object FindAll: TEdit
    Left = 472
    Top = 75
    Width = 145
    Height = 21
    TabOrder = 18
  end
  object Button1: TButton
    Left = 472
    Top = 102
    Width = 145
    Height = 25
    Caption = #1053#1072#1081#1090#1080
    TabOrder = 19
    OnClick = Button1Click
  end
  object StaticText2: TStaticText
    Left = 472
    Top = 12
    Width = 145
    Height = 17
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1087#1086#1083#1077' '#1076#1083#1103' '#1087#1086#1080#1089#1082#1072':'
    TabOrder = 20
  end
  object StaticText3: TStaticText
    Left = 472
    Top = 56
    Width = 93
    Height = 17
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1076#1072#1085#1085#1099#1077':'
    TabOrder = 21
  end
  object ComboBox3: TComboBox
    Left = 472
    Top = 245
    Width = 145
    Height = 21
    TabOrder = 22
  end
  object StaticText4: TStaticText
    Left = 472
    Top = 224
    Width = 62
    Height = 17
    Caption = #1056#1072#1073#1086#1090#1085#1080#1082#1080':'
    TabOrder = 23
  end
  object DelEmp: TButton
    Left = 472
    Top = 272
    Width = 145
    Height = 25
    Caption = #1059#1074#1086#1083#1080#1090#1100
    TabOrder = 24
    OnClick = DelEmpClick
  end
end
