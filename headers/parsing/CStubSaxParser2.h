#pragma once
#include "../windissect_forwards.h"

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
