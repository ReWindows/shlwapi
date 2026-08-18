#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 18 member(s).
class CBasePropertyBag {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBasePropertyBag@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountProperties@CBasePropertyBag@@UEAAJPEAK@Z
    virtual long CountProperties(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyInfo@CBasePropertyBag@@UEAAJKKPEAUtagPROPBAG2@@PEAK@Z
    virtual long GetPropertyInfo(unsigned long, unsigned long, tagPROPBAG2*, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadObject@CBasePropertyBag@@UEAAJPEBGKPEAUIUnknown@@PEAUIErrorLog@@@Z
    virtual long LoadObject(unsigned short const *, unsigned long, IUnknown *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBasePropertyBag@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CBasePropertyBag@@UEAAJKPEAUtagPROPBAG2@@PEAUIErrorLog@@PEAUtagVARIANT@@PEAJ@Z
    virtual long Read(unsigned long, tagPROPBAG2*, IErrorLog *, tagVARIANT *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadData@CBasePropertyBag@@UEAAJHIQEBQEBGQEAUtagVARIANT@@@Z
    virtual long ReadData(int, unsigned int, unsigned short const * const * const, tagVARIANT * const);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBasePropertyBag@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CBasePropertyBag@@UEAAJKPEAUtagPROPBAG2@@PEAUtagVARIANT@@@Z
    virtual long Write(unsigned long, tagPROPBAG2*, tagVARIANT *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBasePropertyBag@@IEAA@K@Z
    CBasePropertyBag(unsigned long);
};
