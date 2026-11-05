#pragma once

#include "prx/libSceFreeType/include/GuestFreeType.hpp"
#include "prx/libSceFreeType/include/GuestList.hpp"

namespace FreeType {

constexpr std::uint32_t GlyphFormatBitmap = 0x62697473;

struct GuestBitmapLibrary {
    GuestMemoryRec* memory;
};

}

extern "C" {

int APS5_VABI FT_GlyphSlot_Own_Bitmap_nid_postfix(FreeType::GuestGlyphSlotRec* slot);

}
