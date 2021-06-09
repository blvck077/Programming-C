object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1058#1077#1089#1090' '#1055#1044#1044' '#1056#1077#1089#1087#1091#1073#1083#1080#1082#1080' '#1041#1077#1083#1072#1088#1091#1089#1100
  ClientHeight = 814
  ClientWidth = 1540
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 13
  object LabelCorrect: TLabel
    Left = 0
    Top = 726
    Width = 1537
    Height = 81
    Alignment = taCenter
    AutoSize = False
    Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1086'!'
    Color = clGreen
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
    Transparent = False
    Layout = tlCenter
    Visible = False
  end
  object LabelFail: TLabel
    Left = 0
    Top = 726
    Width = 1537
    Height = 91
    Alignment = taCenter
    AutoSize = False
    Caption = #1053#1077#1087#1088#1072#1074#1080#1083#1100#1085#1086'!'
    Color = clMaroon
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
    Transparent = False
    Layout = tlCenter
    Visible = False
  end
  object ButtonNext: TButton
    Left = 714
    Top = 663
    Width = 161
    Height = 51
    Caption = #1057#1083#1077#1076#1091#1102#1097#1080#1081
    TabOrder = 0
    Visible = False
    OnClick = ButtonNextClick
  end
  object ButtonAnswer: TButton
    Left = 714
    Top = 663
    Width = 161
    Height = 51
    Caption = #1054#1090#1074#1077#1090#1080#1090#1100
    TabOrder = 1
    OnClick = ButtonAnswerClick
  end
  object ButtonFinish: TButton
    Left = 714
    Top = 663
    Width = 161
    Height = 51
    Caption = #1047#1072#1074#1077#1088#1096#1080#1090#1100
    TabOrder = 2
    Visible = False
    OnClick = ButtonFinishClick
  end
  object Panel1: TPanel
    Left = 624
    Top = 192
    Width = 899
    Height = 456
    BevelInner = bvLowered
    TabOrder = 3
    object RadioButton1: TRadioButton
      Left = 32
      Top = 40
      Width = 784
      Height = 76
      Caption = 'RadioButton1'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Trebuchet MS'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      WordWrap = True
    end
    object RadioButton2: TRadioButton
      Left = 32
      Top = 122
      Width = 784
      Height = 76
      Caption = 'RadioButton2'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Trebuchet MS'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      WordWrap = True
    end
    object RadioButton3: TRadioButton
      Left = 32
      Top = 204
      Width = 777
      Height = 76
      Caption = 'RadioButton3'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Trebuchet MS'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      WordWrap = True
    end
    object RadioButton4: TRadioButton
      Left = 32
      Top = 286
      Width = 777
      Height = 76
      Caption = 'RadioButton4'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Trebuchet MS'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      WordWrap = True
    end
  end
  object Panel2: TPanel
    Left = 24
    Top = 71
    Width = 1499
    Height = 122
    BevelInner = bvLowered
    TabOrder = 4
    object Label1: TLabel
      Left = 48
      Top = 24
      Width = 1401
      Height = 170
      AutoSize = False
      Caption = 'Label1'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Trebuchet MS'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
  end
  object Panel3: TPanel
    Left = 24
    Top = 192
    Width = 601
    Height = 456
    BevelInner = bvLowered
    TabOrder = 5
    object Image1: TImage
      Left = 16
      Top = 9
      Width = 578
      Height = 450
    end
  end
  object Panel4: TPanel
    Left = 24
    Top = 8
    Width = 1499
    Height = 65
    BevelInner = bvLowered
    TabOrder = 6
    object Label11: TLabel
      Left = 16
      Top = 8
      Width = 81
      Height = 57
      Alignment = taCenter
      AutoSize = False
      Caption = 'Label11'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      Layout = tlCenter
    end
    object Button1: TButton
      Left = 1368
      Top = 8
      Width = 123
      Height = 49
      Caption = #1047#1072#1074#1077#1088#1096#1080#1090#1100
      TabOrder = 0
      OnClick = Button1Click
    end
  end
  object FileOpenDialog1: TFileOpenDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 32
    Top = 688
  end
  object FileSaveDialog1: TFileSaveDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 64
    Top = 687
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 120
    Top = 688
  end
end
