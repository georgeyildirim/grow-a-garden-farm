// main.cpp — entry point. Wires config and subsystems together.

#include "growagardenfarm/settings.h"
#include "growagardenfarm/farmer.h"
#include "growagardenfarm/cycles.h"
#include "growagardenfarm/alerts.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    growagardenfarm::Settings settings = growagardenfarm::Settings::load_default();
    growagardenfarm::Farmer farmer(settings.store_path);
    growagardenfarm::Cycles cycles(settings.store_path);
    growagardenfarm::Alerts alerts(settings.store_path);
    std::fprintf(stderr, "[grow-a-garden-farm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
