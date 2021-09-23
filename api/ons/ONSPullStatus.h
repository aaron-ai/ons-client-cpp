#pragma once

#include <cstdint>

namespace ons {

enum class ONSPullStatus : uint8_t {
  ONS_FOUND = 0,
  ONS_NO_NEW_MSG = 1,
  ONS_NO_MATCHED_MSG = 2,
  ONS_OFFSET_ILLEGAL = 3,
  ONS_BROKER_TIMEOUT = 3, // indicate pull request timeout without receiving valid response
};

}