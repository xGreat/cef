// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=22728c3e5c0597d46102ae9d7992d47ca356f2f5$
//

#include "libcef_dll/cpptoc/get_extension_resource_callback_cpptoc.h"
#include "libcef_dll/cpptoc/stream_reader_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK get_extension_resource_callback_cont(
    struct _cef_get_extension_resource_callback_t* self,
    struct _cef_stream_reader_t* stream) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: stream

  // Execute
  CefGetExtensionResourceCallbackCppToC::Get(self)->Continue(
      CefStreamReaderCppToC::Unwrap(stream));
}

void CEF_CALLBACK get_extension_resource_callback_cancel(
    struct _cef_get_extension_resource_callback_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefGetExtensionResourceCallbackCppToC::Get(self)->Cancel();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefGetExtensionResourceCallbackCppToC::CefGetExtensionResourceCallbackCppToC() {
  GetStruct()->cont = get_extension_resource_callback_cont;
  GetStruct()->cancel = get_extension_resource_callback_cancel;
}

// DESTRUCTOR - Do not edit by hand.

CefGetExtensionResourceCallbackCppToC::
    ~CefGetExtensionResourceCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefGetExtensionResourceCallback>
CefCppToCRefCounted<CefGetExtensionResourceCallbackCppToC,
                    CefGetExtensionResourceCallback,
                    cef_get_extension_resource_callback_t>::
    UnwrapDerived(CefWrapperType type,
                  cef_get_extension_resource_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefGetExtensionResourceCallbackCppToC,
                        CefGetExtensionResourceCallback,
                        cef_get_extension_resource_callback_t>::kWrapperType =
        WT_GET_EXTENSION_RESOURCE_CALLBACK;
