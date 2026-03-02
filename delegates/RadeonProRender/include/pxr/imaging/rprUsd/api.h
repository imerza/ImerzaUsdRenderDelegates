//
// Copyright 2017 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef RPRUSD_API_H
#define RPRUSD_API_H

#include "pxr/base/arch/export.h"

#if defined(PXR_STATIC)
#   define RPRUSD_API
#   define RPRUSD_API_TEMPLATE_CLASS(...)
#   define RPRUSD_API_TEMPLATE_STRUCT(...)
#   define RPRUSD_LOCAL
#else
#   if defined(RPRUSD_EXPORTS)
#       define RPRUSD_API ARCH_EXPORT
#       define RPRUSD_API_TEMPLATE_CLASS(...) ARCH_EXPORT_TEMPLATE(class, __VA_ARGS__)
#       define RPRUSD_API_TEMPLATE_STRUCT(...) ARCH_EXPORT_TEMPLATE(struct, __VA_ARGS__)
#   else
#       define RPRUSD_API ARCH_IMPORT
#       define RPRUSD_API_TEMPLATE_CLASS(...) ARCH_IMPORT_TEMPLATE(class, __VA_ARGS__)
#       define RPRUSD_API_TEMPLATE_STRUCT(...) ARCH_IMPORT_TEMPLATE(struct, __VA_ARGS__)
#   endif
#   define RPRUSD_LOCAL ARCH_HIDDEN
#endif

#endif
