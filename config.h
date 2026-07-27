#pragma once

// ============================================================
//  Customize these values to brand the credential provider
//  tile on the Windows lock screen / logon screen.
// ============================================================

// The label shown under the tile icon on the lock screen.
// Examples: L"Face Unlock", L"Voice Login", L"Biometric", L"Auto Unlock"
#define PROVIDER_LABEL      L"Auto Unlock"

// Set to 1 to hide the tile completely from the lock screen.
// The provider still loads and listens on the pipe, but no tile
// is visible until an unlock command arrives.  When the command
// comes in, the provider reports 1 credential with auto-logon
// and Windows processes it immediately -- the user never sees it.
#define HIDDEN_TILE         1

// Optional: path to a BMP file baked into the DLL as a resource.
// Set to 0 to use the default Windows user silhouette.
// The bitmap should be 72x72 pixels, 32-bit ARGB (BMP v5).
// Only relevant when HIDDEN_TILE is 0.
#define IDB_TILE_IMAGE      101
#define USE_CUSTOM_TILE     0
