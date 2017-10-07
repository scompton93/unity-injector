///////////////////////////////////////////////////////////////////////////////
// File: mono_domain.h
///////////////////////////////////////////////////////////////////////////////
// Purpose: Replicates mono domain functionality.
///////////////////////////////////////////////////////////////////////////////
// Author: Deniz Sezen
///////////////////////////////////////////////////////////////////////////////
#pragma once

///////////////////////////////////////////////////////////////////////////////
// Includes
///////////////////////////////////////////////////////////////////////////////

// Mono includes
#include "mono_types.h"
#include "mono_func_helpers.h"

///////////////////////////////////////////////////////////////////////////////
// Typedefs
///////////////////////////////////////////////////////////////////////////////
typedef struct _MonoDomain MonoDomain;
typedef struct _MonoThread MonoThread;

///////////////////////////////////////////////////////////////////////////////
// Image interface
///////////////////////////////////////////////////////////////////////////////
DECLARE_MONO_FUNC(mono_get_root_domain, MonoDomain*);

/* This is here for convenience. No sense in making another entire header
 * for thread stuff.
 */
DECLARE_MONO_FUNC(mono_thread_attach, MonoThread*, MonoDomain* domain);

///////////////////////////////////////////////////////////////////////////////
// Domain interface initialization
///////////////////////////////////////////////////////////////////////////////
bool mono_domain_api_init(void);