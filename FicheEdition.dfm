object FicheEditeur: TFicheEditeur
  Left = 438
  Top = 227
  Width = 1156
  Height = 656
  Caption = 'FicheEditeur'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 208
    Top = 152
    Width = 23
    Height = 13
    Caption = 'Date'
  end
  object Label2: TLabel
    Left = 232
    Top = 304
    Width = 29
    Height = 13
    Caption = 'Heure'
  end
  object Label3: TLabel
    Left = 376
    Top = 304
    Width = 20
    Height = 13
    Caption = 'Lieu'
  end
  object Label4: TLabel
    Left = 736
    Top = 40
    Width = 174
    Height = 13
    Caption = 'Description compl'#232'te de l'#39#233'venement'
  end
  object Label5: TLabel
    Left = 208
    Top = 400
    Width = 114
    Height = 13
    Caption = 'R'#233'sum'#233' de l'#39#233'venement'
  end
  object Memo1: TMemo
    Left = 736
    Top = 56
    Width = 241
    Height = 457
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object ComboBox1: TComboBox
    Left = 376
    Top = 328
    Width = 145
    Height = 21
    ItemHeight = 13
    TabOrder = 1
  end
  object Memo2: TMemo
    Left = 208
    Top = 416
    Width = 481
    Height = 97
    Lines.Strings = (
      'Memo2')
    TabOrder = 2
  end
  object Date: TButton
    Left = 232
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Date'
    TabOrder = 3
    OnClick = DateClick
  end
  object MainMenu1: TMainMenu
    Left = 16
    Top = 8
  end
end
