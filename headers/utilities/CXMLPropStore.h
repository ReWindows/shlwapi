#pragma once
#include "../windissect_forwards.h"

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
