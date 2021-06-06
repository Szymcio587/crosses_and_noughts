object Form1: TForm1
  Left = 332
  Top = 192
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'Form1'
  ClientHeight = 390
  ClientWidth = 676
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 101
    Height = 100
    Cursor = crHandPoint
    OnClick = Image1Click
  end
  object TLabel
    Left = 432
    Top = 128
    Width = 3
    Height = 13
  end
  object Label1: TLabel
    Left = 400
    Top = 24
    Width = 143
    Height = 29
    Caption = 'Tura Gracza'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Image10: TImage
    Left = 552
    Top = 24
    Width = 30
    Height = 30
  end
  object Image2: TImage
    Left = 96
    Top = 0
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image2Click
  end
  object Image3: TImage
    Left = 192
    Top = 0
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image3Click
  end
  object Image4: TImage
    Left = 0
    Top = 96
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image4Click
  end
  object Image5: TImage
    Left = 96
    Top = 96
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image5Click
  end
  object Image6: TImage
    Left = 192
    Top = 96
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image6Click
  end
  object Image7: TImage
    Left = 0
    Top = 192
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image7Click
  end
  object Image8: TImage
    Left = 96
    Top = 192
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image8Click
  end
  object Image9: TImage
    Left = 192
    Top = 192
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Image9Click
  end
  object Button1: TButton
    Left = 400
    Top = 64
    Width = 185
    Height = 81
    Caption = 'Nowa Gra'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
  object Button2: TButton
    Left = 400
    Top = 160
    Width = 185
    Height = 81
    Caption = 'Wyj'#347'cie'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
end
