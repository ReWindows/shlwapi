# `tson` :: `output_archive`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `shlwapi.dll`. Total members: **25**.

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

// Reconstructed from shlwapi.dll by Windissect. 25 member(s).
namespace tson {
class output_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish@output_archive@tson@@QEAAJXZ
    long finish();
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@output_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z
    output_archive(WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@output_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_name@output_archive@tson@@AEAA_N_N@Z
    bool write_name(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z
    void write_string_bytes(uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z
    bool write_type(bool, int);
};
} // namespace tson

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `operator()<struct tson::ansistring_tag &>` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<struct tson::string_tag &>` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<bool &>` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<struct tson::size_tag>` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<char &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<unsigned char &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<short &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<unsigned long &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<double &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<struct _tip_MruLookupTest &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<struct _tip_PidlNormalizationTest &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<int64_t &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<uint64_t &> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `operator()<class tson::nvp<struct tson::ansistring_tag> >` | `class tson::output_archive &` | `Operator` | `Pdb` | No (PDB) |
| `process<class tson::nvp<unsigned short &> >` | `void` | `Method` | `Pdb` | No (PDB) |
| `process<class tson::nvp<unsigned int &>, class tson::nvp<struct tson::string_tag &>, class tson::nvp<struct tson::ansistring_tag &> >` | `void` | `Method` | `Pdb` | No (PDB) |
| `process<class tson::nvp<long &> >` | `void` | `Method` | `Pdb` | No (PDB) |
| `process<class tson::nvp<long &>, class tson::nvp<long &> >` | `void` | `Method` | `Pdb` | No (PDB) |
| `output_archive` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `finish` | `long` | `Method` | `Pdb` | No (PDB) |
| `finishNode` | `void` | `Method` | `Pdb` | No (PDB) |
| `startNode` | `void` | `Method` | `Pdb` | No (PDB) |
| `write_name` | `bool` | `Method` | `Pdb` | No (PDB) |
| `write_string_bytes` | `void` | `Method` | `Pdb` | No (PDB) |
| `write_type` | `bool` | `Method` | `Pdb` | No (PDB) |
