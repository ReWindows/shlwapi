# `global` :: `CViewStatePropertyBag`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `shlwapi.dll`. Total members: **34**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class ATL; 
class CXMLPropStoreSaxParser; 
namespace Microsoft { namespace WRL { class Details; } } 
class tson; 
class ATL; class CBasePropertyBag; class CConvertStr; class CConvertStrW; class CDesktopUpgradePropertyBag; class CIniPropertyBag; class CRegPropertyBag; class CStrIn; class CStrInW; class CStrOutW; class CStrSectionX; class CStrUTF7; class CTCoAllocPolicy; class CTLocalAllocPolicy; class CThumbnailMaker; class CViewStatePropertyBag; class CXMLPropStore; class CXMLPropStoreSaxParser; class CXmlPropSimpleXPathParser; class CoTaskMemFree; class Destroy; class ERRBUF; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HFONT__; class HINSTANCE__; class HKEY__; class HRSRC__; class HWND__; class IBindCtx; class ICachedPrivateProfile; class IClassFactory; class IConnectionPoint; class IContextMenu; class IDispatch; class IErrorLog; class IObjMgr; class IPropertyBag; class IQueryAssociations; class ISAXAttributes; class ISAXLocator; class IStream; class IUnknown; class IXMLDOMAttribute; class IXMLDOMDocument; class IXMLDOMDocument2; class IXMLDOMElement; class IXMLDOMNode; class IXMLDOMSchemaCollection; class IXMLDOMSchemaCollection2; class KNOWNTYPE; class LeaveCriticalSection; class PROPVALUERESULT; class QUERYEXECB; class ReleaseSRWLockExclusive; class SHINVOKEPARAMS; class ShStrW; class TipReportingInfo; class WilFailureReport; class WilFailureReportInformation; class _CONTEXT; class _EVENT_DESCRIPTOR; class _EXCEPTION_RECORD; class _GUID; class _ITEMIDLIST_ABSOLUTE; class _PSP; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _RTL_VERSION_RESOURCE; class _SHSQM_STREAM_ENTRY; class _TASKDIALOGCONFIG; class _TOKEN_MANDATORY_LABEL; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tagpropertykey; class _tip_BagsComparisonTest; class _tip_MruLookupTest; class _tip_PidlNormalizationTest; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class lambda_1c34188375db90f340125b75aaaf55b8; class lambda_7231eddedfda81c4fc45d67c49edc006; class lambda_7f34dda4c3a21f63818194a7724a5899; class lambda_fe718337787c493ce2d833414db25eba; class tagBITMAPINFO; class tagBLOB; class tagPOINT; class tagPROPBAG2; class tagPROPVARIANT; class tagRGBQUAD; class tagVARIANT; class thunk; class tson; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Microsoft { namespace WRL { class Details; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; } } } } 
namespace Windows { namespace Internal { class CoTaskMemPolicy; class NativeString; } } 
namespace std { class nothrow_t; class nullptr_t; } 
namespace tip2 { class details; class test_flag; class test_info; class test_requirement; class test_state; class vector_nothrow; } 
namespace wil { class FailureInfo; class StoredFailureInfo; class com_ptr_t; class err_returncode_policy; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureLogging; class FeatureStateManager; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from shlwapi.dll by Windissect. 34 member(s).
class CViewStatePropertyBag {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CViewStatePropertyBag@@QEAA@XZ
    CViewStatePropertyBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CViewStatePropertyBag@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGK@Z
    long Init(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameBag@CViewStatePropertyBag@@QEAAHPEBU_ITEMIDLIST_ABSOLUTE@@PEBGK@Z
    int IsSameBag(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CViewStatePropertyBag@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewStateCachedNormalized@CViewStatePropertyBag@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    static long SetViewStateCachedNormalized(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewStateCachedOriginal@CViewStatePropertyBag@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    static long SetViewStateCachedOriginal(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CViewStatePropertyBag@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMRUSize@CViewStatePropertyBag@@SAKPEAUHKEY__@@@Z
    static unsigned long s_GetMRUSize(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetRegKey@CViewStatePropertyBag@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGKKPEAUHKEY__@@PEAGI@Z
    static long s_GetRegKey(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long, unsigned long, HKEY__*, unsigned short *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAccessFolderDefaultsBag@CViewStatePropertyBag@@AEAAHXZ
    int _CanAccessFolderDefaultsBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAccessUserDefaultsBag@CViewStatePropertyBag@@AEAAHXZ
    int _CanAccessUserDefaultsBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBag@CViewStatePropertyBag@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGKKAEBU_GUID@@PEAPEAX@Z
    long _CreateBag(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFolderDefaultsBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureFolderDefaultsBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureGlobalDefaultsBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureGlobalDefaultsBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInheritBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureInheritBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePidlBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsurePidlBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureReadBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureReadBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUpgradeBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureUpgradeBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUserDefaultsBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureUserDefaultsBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureWriteBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureWriteBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindNearestInheritBag@CViewStatePropertyBag@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _FindNearestInheritBag(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewStateKey@CViewStatePropertyBag@@AEAAPEAUHKEY__@@KK@Z
    HKEY__* _GetViewStateKey(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSamePidl@CViewStatePropertyBag@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsSamePidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSystemFolder@CViewStatePropertyBag@@AEAAHXZ
    int _IsSystemFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneMRUTree@CViewStatePropertyBag@@AEAAXXZ
    void _PruneMRUTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadFolderDefaultsBag@CViewStatePropertyBag@@AEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    long _ReadFolderDefaultsBag(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadGlobalDefaultsBag@CViewStatePropertyBag@@AEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    long _ReadGlobalDefaultsBag(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadUpgradeBag@CViewStatePropertyBag@@AEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    long _ReadUpgradeBag(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetTryAgainFlag@CViewStatePropertyBag@@AEAAXXZ
    void _ResetTryAgainFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearRegKey@CViewStatePropertyBag@@CAJPEAUHKEY__@@KPEBG@Z
    static long s_ClearRegKey(HKEY__*, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMRUSlots@CViewStatePropertyBag@@CAJPEBU_ITEMIDLIST_ABSOLUTE@@KPEAUHKEY__@@QEAKKPEAKPEAH@Z
    static long s_GetMRUSlots(_ITEMIDLIST_ABSOLUTE const *, unsigned long, HKEY__*, unsigned long * const, unsigned long, unsigned long *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewStatePropertyBag@@EEAA@XZ
    virtual ~CViewStatePropertyBag();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `_ReadGlobalDefaultsBag` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureGlobalDefaultsBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `Write` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureWriteBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `s_GetRegKey` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FindNearestInheritBag` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateBag` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_GetMRUSlots` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_ClearRegKey` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResetTryAgainFlag` | `void` | `Method` | `Pdb` | No (PDB) |
| `Read` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsurePidlBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_EnsureInheritBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_EnsureUserDefaultsBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ReadUpgradeBag` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReadFolderDefaultsBag` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureUpgradeBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_EnsureFolderDefaultsBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsSystemFolder` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CanAccessFolderDefaultsBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CanAccessUserDefaultsBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsSameBag` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_IsSamePidl` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetViewStateKey` | `struct HKEY__*` | `Method` | `Pdb` | No (PDB) |
| `s_GetMRUSize` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CViewStatePropertyBag` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `Init` | `long` | `Method` | `Pdb` | No (PDB) |
| `CViewStatePropertyBag` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `SetViewStateCachedNormalized` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetViewStateCachedOriginal` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_EnsureReadBag` | `int` | `Method` | `Pdb` | No (PDB) |
| `_PruneMRUTree` | `void` | `Method` | `Pdb` | No (PDB) |
