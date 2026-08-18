#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 6 member(s).
class CThumbnailMaker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDIBSECTION@CThumbnailMaker@@QEAAJPEAUtagBITMAPINFO@@PEAX@Z
    long AddDIBSECTION(tagBITMAPINFO *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBITMAPINFO@CThumbnailMaker@@QEAAJPEAPEAUtagBITMAPINFO@@PEAK@Z
    long GetBITMAPINFO(tagBITMAPINFO * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharpenedBITMAPINFO@CThumbnailMaker@@QEAAJIPEAPEAUtagBITMAPINFO@@PEAK@Z
    long GetSharpenedBITMAPINFO(unsigned int, tagBITMAPINFO * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CThumbnailMaker@@QEAAJIIII@Z
    long Init(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale@CThumbnailMaker@@QEBAJPEAY02EIHPEAY02$$CBEIH@Z
    long Scale(unsigned char (*)[3], unsigned int, int, unsigned char const (*)[3], unsigned int, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailMaker@@QEAA@XZ
    ~CThumbnailMaker();
};
