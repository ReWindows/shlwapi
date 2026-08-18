# `global` :: `CXMLPropStore`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `shlwapi.dll`. Total members: **56**.

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

// Reconstructed from shlwapi.dll by Windissect. 56 member(s).
class CXMLPropStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CXMLPropStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CXMLPropStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CXMLPropStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CXMLPropStore@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassIdentity@CXMLPropStore@@UEAAJPEAPEAG@Z
    virtual long GetClassIdentity(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CXMLPropStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameAt@CXMLPropStore@@UEAAJKPEAPEAG@Z
    virtual long GetNameAt(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCount@CXMLPropStore@@UEAAJPEAK@Z
    virtual long GetNameCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@CXMLPropStore@@UEAAJPEBGPEAUtagPROPVARIANT@@@Z
    virtual long GetNamedValue(unsigned short const *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CXMLPropStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CXMLPropStore@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CXMLPropStore@@UEAAJPEAUIStream@@K@Z
    virtual long Initialize(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CXMLPropStore@@UEAAJPEAUIXMLDOMNode@@K@Z
    virtual long Initialize(IXMLDOMNode *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CXMLPropStore@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CXMLPropStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CXMLPropStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CXMLPropStore@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedValue@CXMLPropStore@@UEAAJPEBGAEBUtagPROPVARIANT@@@Z
    virtual long SetNamedValue(unsigned short const *, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CXMLPropStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropKeysToDSA@CXMLPropStore@@IEAAJPEAUIXMLDOMNode@@AEBU_GUID@@@Z
    long _AddPropKeysToDSA(IXMLDOMNode *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAttribute@CXMLPropStore@@IEAAJPEAUIXMLDOMElement@@PEBGPEAPEAUIXMLDOMAttribute@@@Z
    long _CreateAttribute(IXMLDOMElement *, unsigned short const *, IXMLDOMAttribute * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAttributes@CXMLPropStore@@IEAAJPEAUIXMLDOMElement@@PEAG@Z
    long _CreateAttributes(IXMLDOMElement *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNode@CXMLPropStore@@IEAAJPEAUIXMLDOMNode@@PEAGPEAPEAU2@@Z
    long _CreateNode(IXMLDOMNode *, unsigned short *, IXMLDOMNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRelativeXPath@CXMLPropStore@@IEAAJPEAUIXMLDOMNode@@PEAGPEAPEAU2@@Z
    long _CreateRelativeXPath(IXMLDOMNode *, unsigned short *, IXMLDOMNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateXPath@CXMLPropStore@@IEAAJPEBGPEAPEAUIXMLDOMNode@@@Z
    long _CreateXPath(unsigned short const *, IXMLDOMNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_DeleteProp@CXMLPropStore@@IEAAJPEBG@Z
    long _DeleteProp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePropDSA@CXMLPropStore@@IEAAJXZ
    long _EnsurePropDSA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureXPathProps@CXMLPropStore@@IEAAJXZ
    long _EnsureXPathProps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributeFromNode@CXMLPropStore@@IEAAJPEAUIXMLDOMNode@@PEAGGPEAUtagVARIANT@@@Z
    long _GetAttributeFromNode(IXMLDOMNode *, unsigned short *, unsigned short, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDocument@CXMLPropStore@@IEAAJPEAPEAUIXMLDOMDocument@@@Z
    long _GetDocument(IXMLDOMDocument * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGenericPropsNode@CXMLPropStore@@IEAAJPEAPEAUIXMLDOMNode@@@Z
    long _GetGenericPropsNode(IXMLDOMNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPathAndVarType@CXMLPropStore@@IEAAJAEBU_tagpropertykey@@PEAPEAGPEAG@Z
    long _GetPathAndVarType(_tagpropertykey const &, unsigned short * *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitXPathProps@CXMLPropStore@@IEAAJXZ
    long _InitXPathProps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDOMFromStream@CXMLPropStore@@IEAAJPEAUIStream@@@Z
    long _LoadDOMFromStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NodeFromXPath@CXMLPropStore@@IEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    long _NodeFromXPath(unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_ReadProp@CXMLPropStore@@IEAAJPEBGGAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    long _ReadProp(unsigned short const *, unsigned short, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateRoot@CXMLPropStore@@IEAAJPEBG@Z
    long _ValidateRoot(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_WriteProp@CXMLPropStore@@IEAAJPEBGAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    long _WriteProp(unsigned short const *, _tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXMLPropStore@@MEAA@XZ
    virtual ~CXMLPropStore();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `GetValue` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetPathAndVarType` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReadProp` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_EnsureXPathProps` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitNew` | `long` | `Method` | `Pdb` | Yes |
| `~CXMLPropStore` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Commit` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetAt` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetClassID` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetClassIdentity` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNameAt` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNameCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNamedValue` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `Load` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Save` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetNamedValue` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetValue` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_AddPropKeysToDSA` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAttribute` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAttributes` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateRelativeXPath` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateXPath` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DeleteProp` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_EnsurePropDSA` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetAttributeFromNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetDocument` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetGenericPropsNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitXPathProps` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LoadDOMFromStream` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NodeFromXPath` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ValidateRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `_WriteProp` | `long` | `Accessor` | `Pdb` | No (PDB) |
