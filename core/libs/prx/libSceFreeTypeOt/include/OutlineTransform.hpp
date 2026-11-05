#pragma once

#include "prx/libSceFreeType/include/GuestFreeType.hpp"

#include <cstdint>

extern "C" {

void APS5_VABI FT_Outline_Transform_nid_postfix(const FreeType::GuestOutline* outline, const FreeType::GuestMatrix* matrix);
int APS5_VABI FT_Outline_Embolden_nid_postfix(FreeType::GuestOutline* outline, std::int64_t strength);
int APS5_VABI FT_Outline_EmboldenXY_nid_postfix(FreeType::GuestOutline* outline, std::int64_t xstrength, std::int64_t ystrength);

}
