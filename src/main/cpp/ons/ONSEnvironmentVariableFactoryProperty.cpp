#include "ons/ONSEnvironmentVariableFactoryProperty.h"

#include <cstdlib>
#include <cstring>

namespace ons {

ONSEnvironmentVariableFactoryProperty::ONSEnvironmentVariableFactoryProperty() {
  setDefaults();
  parseEnvironmentVariables();
}

void ONSEnvironmentVariableFactoryProperty::parseEnvironmentVariables() {
  char* value = getenv(AccessKey);
  if (value && strlen(value)) {
    setFactoryProperty(AccessKey, value);
  }

  value = getenv(SecretKey);
  if (value && strlen(value)) {
    setFactoryProperty(SecretKey, value);
  }

  value = getenv(GroupId);
  if (value && strlen(value)) {
    setFactoryProperty(GroupId, value);
  }

  value = getenv(NAMESRV_ADDR);
  if (value && strlen(value)) {
    setFactoryProperty(NAMESRV_ADDR, value);
  }
}

} // namespace ons