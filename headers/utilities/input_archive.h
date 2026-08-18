#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 9 member(s).
namespace tson {
class input_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@input_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@input_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z
    bool consume_expected_marker(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_node@input_archive@tson@@AEAAXXZ
    void push_node();
    // Category: Method | Source: PDB Internal
    // Symbol: ?search@input_archive@tson@@AEAA_NXZ
    bool search();
};
} // namespace tson
