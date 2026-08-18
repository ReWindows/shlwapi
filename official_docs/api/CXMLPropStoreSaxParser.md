# `global` :: `CXMLPropStoreSaxParser`

**Category:** [XML & Parsing Engine](./README.md)

Reconstructed from `shlwapi.dll`. Total members: **40**.

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

// Reconstructed from shlwapi.dll by Windissect. 40 member(s).
class CXMLPropStoreSaxParser {
public:
    class CStubSaxParser2;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXMLPropStoreSaxParser@@QEAA@XZ
    CXMLPropStoreSaxParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@CXMLPropStoreSaxParser@@QEAAJPEAUIStream@@@Z
    long Parse(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CXMLPropStoreSaxParser@@QEAAJPEAUHKEY__@@W4SAXPARSER_READ_MODE@@@Z
    long RuntimeClassInitialize(HKEY__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?characters@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long characters(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?endDocument@CXMLPropStoreSaxParser@@UEAAJXZ
    virtual long endDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?endElement@CXMLPropStoreSaxParser@@UEAAJPEBGH0H0H@Z
    virtual long endElement(unsigned short const *, int, unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?endPrefixMapping@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long endPrefixMapping(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?error@CXMLPropStoreSaxParser@@UEAAJPEAUISAXLocator@@PEBGJ@Z
    virtual long error(ISAXLocator *, unsigned short const *, long);
    // Category: Method | Source: PE Export
    // Symbol: ?fatalError@CXMLPropStoreSaxParser@@UEAAJPEAUISAXLocator@@PEBGJ@Z
    virtual long fatalError(ISAXLocator *, unsigned short const *, long);
    // Category: Method | Source: PE Export
    // Symbol: ?ignorableWarning@CXMLPropStoreSaxParser@@UEAAJPEAUISAXLocator@@PEBGJ@Z
    virtual long ignorableWarning(ISAXLocator *, unsigned short const *, long);
    // Category: Method | Source: PE Export
    // Symbol: ?ignorableWhitespace@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long ignorableWhitespace(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?processingInstruction@CXMLPropStoreSaxParser@@UEAAJPEBGH0H@Z
    virtual long processingInstruction(unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?putDocumentLocator@CXMLPropStoreSaxParser@@UEAAJPEAUISAXLocator@@@Z
    virtual long putDocumentLocator(ISAXLocator *);
    // Category: Method | Source: PE Export
    // Symbol: ?skippedEntity@CXMLPropStoreSaxParser@@UEAAJPEBGH@Z
    virtual long skippedEntity(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startDocument@CXMLPropStoreSaxParser@@UEAAJXZ
    virtual long startDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?startElement@CXMLPropStoreSaxParser@@UEAAJPEBGH0H0HPEAUISAXAttributes@@@Z
    virtual long startElement(unsigned short const *, int, unsigned short const *, int, unsigned short const *, int, ISAXAttributes *);
    // Category: Method | Source: PE Export
    // Symbol: ?startPrefixMapping@CXMLPropStoreSaxParser@@UEAAJPEBGH0H@Z
    virtual long startPrefixMapping(unsigned short const *, int, unsigned short const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddEntryAndRetrieveReference@CXMLPropStoreSaxParser@@AEAAJPEAUHKEY__@@PEAPEAUPROPVALUERESULT@@@Z
    long _AddEntryAndRetrieveReference(HKEY__*, PROPVALUERESULT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddEntryForContent@CXMLPropStoreSaxParser@@AEAAJPEAUHKEY__@@PEBG@Z
    long _AddEntryForContent(HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddEntryForOpenMetadata@CXMLPropStoreSaxParser@@AEAAJPEAUHKEY__@@@Z
    long _AddEntryForOpenMetadata(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSchemaToCollection@CXMLPropStoreSaxParser@@AEAAJPEAUIXMLDOMDocument2@@PEBGPEAUIXMLDOMSchemaCollection2@@@Z
    long _AddSchemaToCollection(IXMLDOMDocument2*, unsigned short const *, IXMLDOMSchemaCollection2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddUniversalSchemaToCollection@CXMLPropStoreSaxParser@@AEAAJPEAUIStream@@PEAUIXMLDOMSchemaCollection2@@@Z
    long _AddUniversalSchemaToCollection(IStream *, IXMLDOMSchemaCollection2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSchemaCollection@CXMLPropStoreSaxParser@@AEAAJPEAUIStream@@PEAPEAUIXMLDOMSchemaCollection@@@Z
    long _CreateSchemaCollection(IStream *, IXMLDOMSchemaCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTypeFromAttributes@CXMLPropStoreSaxParser@@AEAAXPEAUISAXAttributes@@PEAUPROPVALUERESULT@@@Z
    void _EnsureTypeFromAttributes(ISAXAttributes *, PROPVALUERESULT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitVariantStringProperty@CXMLPropStoreSaxParser@@AEAAJPEBGGAEBU_tagpropertykey@@0PEAUtagPROPVARIANT@@@Z
    long _InitVariantStringProperty(unsigned short const *, unsigned short, _tagpropertykey const &, unsigned short const *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeResultDPA@CXMLPropStoreSaxParser@@AEAAJPEAUHKEY__@@@Z
    long _InitializeResultDPA(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDOMFromResource@CXMLPropStoreSaxParser@@AEAAJPEAUHINSTANCE__@@HPEBGPEAPEAUIXMLDOMDocument2@@@Z
    long _LoadDOMFromResource(HINSTANCE__*, int, unsigned short const *, IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDOMFromStream@CXMLPropStoreSaxParser@@AEAAJPEAUIStream@@PEAPEAUIXMLDOMDocument2@@@Z
    long _LoadDOMFromStream(IStream *, IXMLDOMDocument2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadResourceString@CXMLPropStoreSaxParser@@AEAAJPEBG0PEAG_K@Z
    long _LoadResourceString(unsigned short const *, unsigned short const *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportEvent@CXMLPropStoreSaxParser@@AEAAXPEBGHH@Z
    void _ReportEvent(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RetrieveRootNodeAndNamespace@CXMLPropStoreSaxParser@@AEAAJPEAUIStream@@PEAPEAG1@Z
    long _RetrieveRootNodeAndNamespace(IStream *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetKeyForOpenMetadata@CXMLPropStoreSaxParser@@AEAAXPEBGHPEAUPROPVALUERESULT@@@Z
    void _SetKeyForOpenMetadata(unsigned short const *, int, PROPVALUERESULT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TerminateParsing@CXMLPropStoreSaxParser@@AEAAXXZ
    void _TerminateParsing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PropVariantResultClear@CXMLPropStoreSaxParser@@CAHPEAUPROPVALUERESULT@@PEAX@Z
    static int s_PropVariantResultClear(PROPVALUERESULT *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXMLPropStoreSaxParser@@EEAA@XZ
    virtual ~CXMLPropStoreSaxParser();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `endPrefixMapping` | `long` | `Method` | `Pdb` | Yes |
| `fatalError` | `long` | `Method` | `Pdb` | Yes |
| `ignorableWarning` | `long` | `Method` | `Pdb` | Yes |
| `ignorableWhitespace` | `long` | `Method` | `Pdb` | Yes |
| `processingInstruction` | `long` | `Method` | `Pdb` | Yes |
| `putDocumentLocator` | `long` | `Method` | `Pdb` | Yes |
| `skippedEntity` | `long` | `Method` | `Pdb` | Yes |
| `startPrefixMapping` | `long` | `Method` | `Pdb` | Yes |
| `_ExecuteForAllSubkeys<class <lambda_1c34188375db90f340125b75aaaf55b8> >` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExecuteForAllSubkeys<class <lambda_7231eddedfda81c4fc45d67c49edc006> >` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExecuteForAllSubkeys<class <lambda_7f34dda4c3a21f63818194a7724a5899> >` | `long` | `Method` | `Pdb` | No (PDB) |
| `CXMLPropStoreSaxParser` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `~CXMLPropStoreSaxParser` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `Parse` | `long` | `Method` | `Pdb` | No (PDB) |
| `RuntimeClassInitialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddEntryAndRetrieveReference` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddEntryForContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddEntryForOpenMetadata` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddSchemaToCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddUniversalSchemaToCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateSchemaCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureTypeFromAttributes` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InitVariantStringProperty` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitializeResultDPA` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LoadDOMFromResource` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LoadDOMFromStream` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LoadResourceString` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReportEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RetrieveRootNodeAndNamespace` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetKeyForOpenMetadata` | `void` | `Method` | `Pdb` | No (PDB) |
| `_TerminateParsing` | `void` | `Method` | `Pdb` | No (PDB) |
| `characters` | `long` | `Method` | `Pdb` | No (PDB) |
| `endDocument` | `long` | `Method` | `Pdb` | No (PDB) |
| `endElement` | `long` | `Method` | `Pdb` | No (PDB) |
| `error` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_PropVariantResultClear` | `int` | `Method` | `Pdb` | No (PDB) |
| `startDocument` | `long` | `Method` | `Pdb` | No (PDB) |
| `startElement` | `long` | `Method` | `Pdb` | No (PDB) |
