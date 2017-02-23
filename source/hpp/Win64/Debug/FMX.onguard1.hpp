﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.onguard1.pas' rev: 32.00 (Windows)

#ifndef Fmx_Onguard1HPP
#define Fmx_Onguard1HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Dialogs.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ExtCtrls.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Platform.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Header.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ogutil.hpp>
#include <FMX.onguard.hpp>
#include <FMX.ScrollBox.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Onguard1
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TKeyGenerateFrm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TKeyGenerateFrm : public Fmx::Forms::TForm
{
	typedef Fmx::Forms::TForm inherited;
	
__published:
	Fmx::Stdctrls::TPanel* Panel1;
	Fmx::Stdctrls::TLabel* Label2;
	Fmx::Stdctrls::TSpeedButton* CopyBlockSb;
	Fmx::Stdctrls::TLabel* Label3;
	Fmx::Stdctrls::TLabel* Label4;
	Fmx::Stdctrls::TSpeedButton* CopyByteKeySb;
	Fmx::Memo::TMemo* KeyStringMe;
	Fmx::Edit::TEdit* BlockKeyEd;
	Fmx::Stdctrls::TButton* GenerateBtn;
	Fmx::Listbox::TComboBox* KeyTypeCb;
	Fmx::Edit::TEdit* ByteKeyEd;
	Fmx::Stdctrls::TButton* CancelBtn;
	Fmx::Stdctrls::TButton* OKBtn;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall KeyStringMeChange(System::TObject* Sender);
	void __fastcall KeyTypeCbChange(System::TObject* Sender);
	void __fastcall BlockKeyEdChange(System::TObject* Sender);
	void __fastcall CopyBlockSbClick(System::TObject* Sender);
	void __fastcall ByteKeyEdChange(System::TObject* Sender);
	void __fastcall CopyByteKeySbClick(System::TObject* Sender);
	void __fastcall GenerateBtnClick(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	Fmx::Ogutil::TKey FKey;
	Fmx::Ogutil::TKeyType FKeyType;
	void __fastcall SetKeyType(Fmx::Ogutil::TKeyType Value);
	
public:
	void __fastcall SetKey(const Fmx::Ogutil::TKey &Value);
	void __fastcall GetKey(Fmx::Ogutil::TKey &Value);
	__property Fmx::Ogutil::TKeyType KeyType = {read=FKeyType, write=SetKeyType, nodefault};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TKeyGenerateFrm(System::Classes::TComponent* AOwner) : Fmx::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TKeyGenerateFrm(System::Classes::TComponent* AOwner, NativeInt Dummy) : Fmx::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TKeyGenerateFrm(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Onguard1 */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ONGUARD1)
using namespace Fmx::Onguard1;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Onguard1HPP
