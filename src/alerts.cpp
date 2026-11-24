// alerts.cpp — part of grow-a-garden-farm.

#include "growagardenfarm/alerts.h"

#include <cstdio>

namespace growagardenfarm {

Alerts::Alerts(const std::string& config_path)
    : config_path_(config_path) {}

void Alerts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Alerts::run() {
    if (verbose_) std::fprintf(stderr, "[grow-a-garden-farm] alerts: run\n");
    // core logic lives here
    return true;
}

}  // namespace growagardenfarm
