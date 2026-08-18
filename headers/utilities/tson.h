#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shlwapi.dll by Windissect. 5 member(s).
class tson {
public:
    class input_archive;
    class output_archive;
    class read_buffer;
    class write_buffer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z
    WindissectOpaque make_string_tag(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z
    WindissectOpaque make_string_tag(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z
    void save_nothrow(WindissectOpaque &, ::tip2::test_flag &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tson_size_to_marker@tson@@YAI_K@Z
    unsigned int tson_size_to_marker(uint64_t);
};
