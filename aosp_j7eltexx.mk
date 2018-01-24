$(call inherit-product, device/samsung/j7eltexx/full_j7eltexx.mk)

# Inherit some common aosp stuff.
$(call inherit-product, vendor/aosp/common.mk)

## Device identifier. This must come after all inclusions
PRODUCT_NAME := aosp_j7eltexx
PRODUCT_RELEASE_NAME := SM-J700F
