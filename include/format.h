#ifndef FORMAT_H
#define FORMAT_H

#include <string>

#define SECONDS_PER_MINUTE 60
#define SECONDS_PER_HOUR 3600

namespace Format {
std::string ElapsedTime(long times);  // TODO: See src/format.cpp
};                                    // namespace Format

#endif