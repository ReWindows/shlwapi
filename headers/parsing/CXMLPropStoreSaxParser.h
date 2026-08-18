#pragma once
#include "../windissect_forwards.h"

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
