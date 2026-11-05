#pragma once

#include "prx/libSceFreeType/include/GuestFreeType.hpp"

#include <cstdint>

extern "C" {

void APS5_VABI FT_Outline_Transform_nid_postfix(const FreeType::GuestOutline* outline, const FreeType::GuestMatrix* matrix);

}
