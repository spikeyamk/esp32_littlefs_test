#pragma once

#include <string_view>

#include <esp_err.h>
#include <sdmmc_cmd.h>

namespace SD_Card {
    extern sdmmc_card_t card;
    const std::string_view mount_point { "/sdcard" };
    const std::string_view mount_point_prefix { "/sdcard/" };
    int init();
    esp_err_t deinit();
    esp_err_t format();
    int create_test_file(const size_t size_bytes, const std::string_view& name);
    int check_test_file(const size_t size_bytes, const std::string_view& name);
}