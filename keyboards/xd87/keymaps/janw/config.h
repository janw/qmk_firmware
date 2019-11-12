#pragma once

#ifdef VENDOR_ID
#undef VENDOR_ID
#endif
#ifdef PRODUCT_ID
#undef PRODUCT_ID
#endif
#ifdef DEVICE_VER
#undef DEVICE_VER
#endif
#ifdef PRODUCT
#undef PRODUCT
#endif
#ifdef DESCRIPTION
#undef DESCRIPTION
#endif

#define VENDOR_ID       0xFEEF
#define PRODUCT_ID      0x4201
#define DEVICE_VER      0x8515
#define PRODUCT         XD87 Janw
#define DESCRIPTION     KP Republic XD87 with Janw firmware
