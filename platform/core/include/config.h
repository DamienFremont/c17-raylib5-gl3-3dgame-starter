#include <stdbool.h>

#pragma once

typedef struct AppProperties AppProperties;
struct AppProperties
{
    char appName[999];

    char res_path[999];

    int glsl_version; // 330 desktop

    int screen_width;
    int screen_height;

    int fps_limit; // 0 = Unlimited
    bool fps_counter_show;

    bool postpro_msaa_enable;
    bool postpro_bloom_enable;
};