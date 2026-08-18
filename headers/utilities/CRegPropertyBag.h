#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 9 member(s).
class CRegPropertyBag {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CRegPropertyBag@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CRegPropertyBag@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyStreamIntoBuff@CRegPropertyBag@@AEAAJPEAUIStream@@PEAEK@Z
    long _CopyStreamIntoBuff(IStream *, unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStreamSize@CRegPropertyBag@@AEAAJPEAUIStream@@PEAK@Z
    long _GetStreamSize(IStream *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadBinary@CRegPropertyBag@@AEAAJPEBGPEAUtagVARIANT@@GK@Z
    long _ReadBinary(unsigned short const *, tagVARIANT *, unsigned short, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadULONGLONG@CRegPropertyBag@@AEAAJPEBGPEAUtagVARIANT@@@Z
    long _ReadULONGLONG(unsigned short const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteStream@CRegPropertyBag@@AEAAJPEBGPEAUIStream@@@Z
    long _WriteStream(unsigned short const *, IStream *);
};
