#pragma once

#include "prx/libSceFreeType/include/GuestFreeType.hpp"

#include <cstdint>

namespace FreeType {

std::int64_t OtVectorLength(const GuestVector& vector, const char* function);

}

extern "C" {

std::int64_t APS5_VABI FT_Vector_Length_nid_postfix(FreeType::GuestVector* vector);
void APS5_VABI FT_Vector_Polarize_nid_postfix(FreeType::GuestVector* vector, std::int64_t* length, std::int64_t* angle);
void APS5_VABI FT_Vector_From_Polar_nid_postfix(FreeType::GuestVector* vector, std::int64_t length, std::int64_t angle);
void APS5_VABI FT_Vector_Rotate_nid_postfix(FreeType::GuestVector* vector, std::int64_t angle);

}
