// farmer.cpp — part of grow-a-garden-farm.

#include "growagardenfarm/farmer.h"

#include <cstdio>

namespace growagardenfarm {

Farmer::Farmer(const std::string& config_path)
    : config_path_(config_path) {}

void Farmer::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Farmer::run() {
    if (verbose_) std::fprintf(stderr, "[grow-a-garden-farm] farmer: run\n");
    // core logic lives here
    return true;
}

}  // namespace growagardenfarm
