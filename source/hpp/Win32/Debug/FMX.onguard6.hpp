﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.onguard6.pas' rev: 32.00 (Windows)

#ifndef Fmx_Onguard6HPP
#define Fmx_Onguard6HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <FMX.ogutil.hpp>
#include <FMX.onguard.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <FMX.ComboEdit.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Forms.hpp>
#include <FMX.StdCtrls.hpp>
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.DateTimeCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Onguard6
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TModifierFrm;
class DELPHICLASS TOgModifierProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TModifierFrm : public Fmx::Forms::TForm
{
	typedef Fmx::Forms::TForm inherited;
	
__published:
	Fmx::Stdctrls::TButton* OKBtn;
	Fmx::Stdctrls::TButton* CancelBtn;
	Fmx::Stdctrls::TGroupBox* GroupBox1;
	Fmx::Stdctrls::TCheckBox* UniqueModifierCb;
	Fmx::Stdctrls::TCheckBox* MachineModifierCb;
	Fmx::Stdctrls::TCheckBox* DateModifierCb;
	Fmx::Stdctrls::TCheckBox* NoModifierCb;
	Fmx::Edit::TEdit* ModifierEd;
	Fmx::Datetimectrls::TDateEdit* ModDateEdit;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ModifierClick(System::TObject* Sender);
	void __fastcall ModifierEdKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall DateEdKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall InfoChanged(System::TObject* Sender);
	
private:
	bool FBusy;
	
public:
	int Modifier;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TModifierFrm(System::Classes::TComponent* AOwner) : Fmx::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TModifierFrm(System::Classes::TComponent* AOwner, NativeInt Dummy) : Fmx::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TModifierFrm(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TOgModifierProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TOgModifierProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOgModifierProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Onguard6 */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ONGUARD6)
using namespace Fmx::Onguard6;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Onguard6HPP
