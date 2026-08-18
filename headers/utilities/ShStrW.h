#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 6 member(s).
class ShStrW {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ShStrW@@QEAAJPEBGK@Z
    long Append(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ShStrW@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@ShStrW@@QEAAJK@Z
    long SetSize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@ShStrW@@QEAAXXZ
    void Trim();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStr@ShStrW@@AEAAJPEBDK@Z
    long _SetStr(char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStr@ShStrW@@AEAAJPEBGK@Z
    long _SetStr(unsigned short const *, unsigned long);
};
