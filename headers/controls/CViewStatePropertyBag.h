#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 34 member(s).
class CViewStatePropertyBag {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CViewStatePropertyBag@@QEAA@XZ
    CViewStatePropertyBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CViewStatePropertyBag@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGK@Z
    long Init(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameBag@CViewStatePropertyBag@@QEAAHPEBU_ITEMIDLIST_ABSOLUTE@@PEBGK@Z
    int IsSameBag(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CViewStatePropertyBag@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewStateCachedNormalized@CViewStatePropertyBag@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    static long SetViewStateCachedNormalized(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewStateCachedOriginal@CViewStatePropertyBag@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    static long SetViewStateCachedOriginal(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CViewStatePropertyBag@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMRUSize@CViewStatePropertyBag@@SAKPEAUHKEY__@@@Z
    static unsigned long s_GetMRUSize(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetRegKey@CViewStatePropertyBag@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGKKPEAUHKEY__@@PEAGI@Z
    static long s_GetRegKey(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long, unsigned long, HKEY__*, unsigned short *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAccessFolderDefaultsBag@CViewStatePropertyBag@@AEAAHXZ
    int _CanAccessFolderDefaultsBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAccessUserDefaultsBag@CViewStatePropertyBag@@AEAAHXZ
    int _CanAccessUserDefaultsBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBag@CViewStatePropertyBag@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGKKAEBU_GUID@@PEAPEAX@Z
    long _CreateBag(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFolderDefaultsBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureFolderDefaultsBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureGlobalDefaultsBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureGlobalDefaultsBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInheritBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureInheritBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePidlBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsurePidlBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureReadBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureReadBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUpgradeBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureUpgradeBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUserDefaultsBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureUserDefaultsBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureWriteBag@CViewStatePropertyBag@@AEAAHKAEBU_GUID@@@Z
    int _EnsureWriteBag(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindNearestInheritBag@CViewStatePropertyBag@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _FindNearestInheritBag(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewStateKey@CViewStatePropertyBag@@AEAAPEAUHKEY__@@KK@Z
    HKEY__* _GetViewStateKey(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSamePidl@CViewStatePropertyBag@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsSamePidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSystemFolder@CViewStatePropertyBag@@AEAAHXZ
    int _IsSystemFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneMRUTree@CViewStatePropertyBag@@AEAAXXZ
    void _PruneMRUTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadFolderDefaultsBag@CViewStatePropertyBag@@AEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    long _ReadFolderDefaultsBag(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadGlobalDefaultsBag@CViewStatePropertyBag@@AEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    long _ReadGlobalDefaultsBag(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadUpgradeBag@CViewStatePropertyBag@@AEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    long _ReadUpgradeBag(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetTryAgainFlag@CViewStatePropertyBag@@AEAAXXZ
    void _ResetTryAgainFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearRegKey@CViewStatePropertyBag@@CAJPEAUHKEY__@@KPEBG@Z
    static long s_ClearRegKey(HKEY__*, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMRUSlots@CViewStatePropertyBag@@CAJPEBU_ITEMIDLIST_ABSOLUTE@@KPEAUHKEY__@@QEAKKPEAKPEAH@Z
    static long s_GetMRUSlots(_ITEMIDLIST_ABSOLUTE const *, unsigned long, HKEY__*, unsigned long * const, unsigned long, unsigned long *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewStatePropertyBag@@EEAA@XZ
    virtual ~CViewStatePropertyBag();
};
