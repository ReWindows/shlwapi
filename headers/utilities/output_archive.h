#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 25 member(s).
namespace tson {
class output_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish@output_archive@tson@@QEAAJXZ
    long finish();
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@output_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z
    output_archive(WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@output_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_name@output_archive@tson@@AEAA_N_N@Z
    bool write_name(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z
    void write_string_bytes(uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z
    bool write_type(bool, int);
};
} // namespace tson
