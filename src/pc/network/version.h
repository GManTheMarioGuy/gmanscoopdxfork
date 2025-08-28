#ifndef VERSION_H
#define VERSION_H

#define SM64COOPDX_VERSION "v1.0"

// internal version
#define VERSION_TEXT "v"
#define VERSION_NUMBER 1
#define MINOR_VERSION_NUMBER 0

#if defined(VERSION_JP)
#define VERSION_REGION "JP"
#elif defined(VERSION_EU)
#define VERSION_REGION "EU"
#elif defined(VERSION_SH)
#define VERSION_REGION "SH"
#else
#define VERSION_REGION "US"
#endif

#ifdef DEVELOPMENT
#define GAME_NAME   "gmanscoopdxfork-dev"
#define WINDOW_NAME "GMan's Coop Deluxe Fork (DEV)"
#elif !defined(VERSION_US)
#define GAME_NAME "gmanscoopdxfork-intl"
#define WINDOW_NAME "GMan's Coop Deluxe Fork (INTL)"
#else
#define GAME_NAME "gmanscoopdxfork"
#define WINDOW_NAME "GMan's Coop Deluxe Fork"
#endif

#define MAX_VERSION_LENGTH 128

const char* get_version(void);
#ifdef COMPILE_TIME
const char* get_version_with_build_date(void);
#endif

#endif
