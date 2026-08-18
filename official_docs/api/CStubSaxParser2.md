# `CXMLPropStoreSaxParser` :: `CStubSaxParser2`

**Category:** [XML & Parsing Engine](./README.md)

Reconstructed from `shlwapi.dll`. Total members: **15**.

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

// Reconstructed from shlwapi.dll by Windissect. 15 member(s).
namespace CXMLPropStoreSaxParser {
class CStubSaxParser2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRootNodeAndNamespace@CStubSaxParser2@CXMLPropStoreSaxParser@@QEAAJPEAPEAG0@Z
    long RetrieveRootNodeAndNamespace(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?characters@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long characters(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?endDocument@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJXZ
    virtual long endDocument();
    // Category: Method | Source: PE Export
    // Symbol: ?endElement@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH0H0H@Z
    virtual long endElement(unsigned short const *, int, unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?endPrefixMapping@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long endPrefixMapping(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?ignorableWhitespace@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long ignorableWhitespace(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?processingInstruction@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH0H@Z
    virtual long processingInstruction(unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?putDocumentLocator@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEAUISAXLocator@@@Z
    virtual long putDocumentLocator(ISAXLocator *);
    // Category: Method | Source: PE Export
    // Symbol: ?skippedEntity@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long skippedEntity(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?startDocument@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJXZ
    virtual long startDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?startElement@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH0H0HPEAUISAXAttributes@@@Z
    virtual long startElement(unsigned short const *, int, unsigned short const *, int, unsigned short const *, int, ISAXAttributes *);
    // Category: Method | Source: PE Export
    // Symbol: ?startPrefixMapping@CStubSaxParser2@CXMLPropStoreSaxParser@@UEAAJPEBGH0H@Z
    virtual long startPrefixMapping(unsigned short const *, int, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStubSaxParser2@CXMLPropStoreSaxParser@@UEAA@XZ
    virtual ~CStubSaxParser2();
};
} // namespace CXMLPropStoreSaxParser

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `characters` | `long` | `Method` | `Pdb` | Yes |
| `endDocument` | `long` | `Method` | `Pdb` | Yes |
| `endElement` | `long` | `Method` | `Pdb` | Yes |
| `endPrefixMapping` | `long` | `Method` | `Pdb` | Yes |
| `ignorableWhitespace` | `long` | `Method` | `Pdb` | Yes |
| `processingInstruction` | `long` | `Method` | `Pdb` | Yes |
| `putDocumentLocator` | `long` | `Method` | `Pdb` | Yes |
| `skippedEntity` | `long` | `Method` | `Pdb` | Yes |
| `startDocument` | `long` | `Method` | `Pdb` | Yes |
| `startPrefixMapping` | `long` | `Method` | `Pdb` | Yes |
| `~CStubSaxParser2` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `RetrieveRootNodeAndNamespace` | `long` | `Method` | `Pdb` | No (PDB) |
| `startElement` | `long` | `Method` | `Pdb` | No (PDB) |
