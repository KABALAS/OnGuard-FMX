﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ogposix.pas' rev: 32.00 (iOS)

#ifndef Fmx_OgposixHPP
#define Fmx_OgposixHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Posix.Base.hpp>
#include <Posix.SysSocket.hpp>
#include <Posix.NetIf.hpp>
#include <Posix.NetinetIn.hpp>
#include <Posix.ArpaInet.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Ogposix
{
//-- forward type declarations -----------------------------------------------
struct sockaddr_dl;
//-- type declarations -------------------------------------------------------
typedef System::Byte u_char;

typedef System::Word u_short;

#pragma pack(push,4)
struct DECLSPEC_DRECORD sockaddr_dl
{
public:
	System::Byte sdl_len;
	System::Byte sal_family;
	System::Word sdl_index;
	System::Byte sdl_type;
	System::Byte sdl_nlen;
	System::Byte sdl_alen;
	System::Byte sdl_slen;
	System::StaticArray<System::Byte, 12> sdl_data;
};
#pragma pack(pop)


typedef sockaddr_dl *psockaddr_dl;

//-- var, const, procedure ---------------------------------------------------
static constexpr System::Int8 IFT_ETHER = System::Int8(0x6);
}	/* namespace Ogposix */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_OGPOSIX)
using namespace Fmx::Ogposix;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_OgposixHPP
