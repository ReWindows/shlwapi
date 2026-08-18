#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 8 member(s).
class CDesktopUpgradePropertyBag {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopUpgradePropertyBag@@QEAA@XZ
    CDesktopUpgradePropertyBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CDesktopUpgradePropertyBag@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CDesktopUpgradePropertyBag@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOldDesktopViewStream@CDesktopUpgradePropertyBag@@AEAAPEAUIStream@@XZ
    IStream * _GetOldDesktopViewStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewStreamFromOld@CDesktopUpgradePropertyBag@@AEAAPEAUIStream@@PEAU2@@Z
    IStream * _NewStreamFromOld(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadFlags@CDesktopUpgradePropertyBag@@AEAAJPEAUtagVARIANT@@@Z
    long _ReadFlags(tagVARIANT *);
};
