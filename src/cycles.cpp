// cycles.cpp — part of grow-a-garden-farm.

#include "growagardenfarm/cycles.h"

#include <cstdio>

namespace growagardenfarm {

Cycles::Cycles(const std::string& config_path)
    : config_path_(config_path) {}

void Cycles::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cycles::run() {
    if (verbose_) std::fprintf(stderr, "[grow-a-garden-farm] cycles: run\n");
    // core logic lives here
    return true;
}

}  // namespace growagardenfarm
