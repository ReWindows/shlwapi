#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 7 member(s).
class CIniPropertyBag {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIniPropertyBag@@QEAA@K@Z
    CIniPropertyBag(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CIniPropertyBag@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CIniPropertyBag@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSectionAndName@CIniPropertyBag@@AEAAJPEBGPEAGI1I@Z
    long _GetSectionAndName(unsigned short const *, unsigned short *, unsigned int, unsigned short *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIniPropertyBag@@EEAA@XZ
    virtual ~CIniPropertyBag();
};
