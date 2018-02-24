#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_J700F = 0,
    VARIANT_J700M,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-J700F",
    .codename = "j7eltexx"
};

static const variant latin_america_models = {
    .model = "SM-J700M",
    .codename = "j7elte"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &latin_america_models,
    &oceania_models,
    &china_models,
};

#endif // INIT_SEC_H
