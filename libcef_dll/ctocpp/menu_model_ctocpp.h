// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef_menu_model.h"
#include "include/capi/cef_menu_model_capi.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefMenuModelCToCpp
    : public CefCToCppRefCounted<CefMenuModelCToCpp, CefMenuModel,
        cef_menu_model_t> {
 public:
  CefMenuModelCToCpp();

  // CefMenuModel methods.
  bool IsSubMenu() OVERRIDE;
  bool Clear() OVERRIDE;
  int GetCount() OVERRIDE;
  bool AddSeparator() OVERRIDE;
  bool AddItem(int command_id, const CefString& label) OVERRIDE;
  bool AddCheckItem(int command_id, const CefString& label) OVERRIDE;
  bool AddRadioItem(int command_id, const CefString& label,
      int group_id) OVERRIDE;
  CefRefPtr<CefMenuModel> AddSubMenu(int command_id,
      const CefString& label) OVERRIDE;
  bool InsertSeparatorAt(int index) OVERRIDE;
  bool InsertItemAt(int index, int command_id, const CefString& label) OVERRIDE;
  bool InsertCheckItemAt(int index, int command_id,
      const CefString& label) OVERRIDE;
  bool InsertRadioItemAt(int index, int command_id, const CefString& label,
      int group_id) OVERRIDE;
  CefRefPtr<CefMenuModel> InsertSubMenuAt(int index, int command_id,
      const CefString& label) OVERRIDE;
  bool Remove(int command_id) OVERRIDE;
  bool RemoveAt(int index) OVERRIDE;
  int GetIndexOf(int command_id) OVERRIDE;
  int GetCommandIdAt(int index) OVERRIDE;
  bool SetCommandIdAt(int index, int command_id) OVERRIDE;
  CefString GetLabel(int command_id) OVERRIDE;
  CefString GetLabelAt(int index) OVERRIDE;
  bool SetLabel(int command_id, const CefString& label) OVERRIDE;
  bool SetLabelAt(int index, const CefString& label) OVERRIDE;
  MenuItemType GetType(int command_id) OVERRIDE;
  MenuItemType GetTypeAt(int index) OVERRIDE;
  int GetGroupId(int command_id) OVERRIDE;
  int GetGroupIdAt(int index) OVERRIDE;
  bool SetGroupId(int command_id, int group_id) OVERRIDE;
  bool SetGroupIdAt(int index, int group_id) OVERRIDE;
  CefRefPtr<CefMenuModel> GetSubMenu(int command_id) OVERRIDE;
  CefRefPtr<CefMenuModel> GetSubMenuAt(int index) OVERRIDE;
  bool IsVisible(int command_id) OVERRIDE;
  bool IsVisibleAt(int index) OVERRIDE;
  bool SetVisible(int command_id, bool visible) OVERRIDE;
  bool SetVisibleAt(int index, bool visible) OVERRIDE;
  bool IsEnabled(int command_id) OVERRIDE;
  bool IsEnabledAt(int index) OVERRIDE;
  bool SetEnabled(int command_id, bool enabled) OVERRIDE;
  bool SetEnabledAt(int index, bool enabled) OVERRIDE;
  bool IsChecked(int command_id) OVERRIDE;
  bool IsCheckedAt(int index) OVERRIDE;
  bool SetChecked(int command_id, bool checked) OVERRIDE;
  bool SetCheckedAt(int index, bool checked) OVERRIDE;
  bool HasAccelerator(int command_id) OVERRIDE;
  bool HasAcceleratorAt(int index) OVERRIDE;
  bool SetAccelerator(int command_id, int key_code, bool shift_pressed,
      bool ctrl_pressed, bool alt_pressed) OVERRIDE;
  bool SetAcceleratorAt(int index, int key_code, bool shift_pressed,
      bool ctrl_pressed, bool alt_pressed) OVERRIDE;
  bool RemoveAccelerator(int command_id) OVERRIDE;
  bool RemoveAcceleratorAt(int index) OVERRIDE;
  bool GetAccelerator(int command_id, int& key_code, bool& shift_pressed,
      bool& ctrl_pressed, bool& alt_pressed) OVERRIDE;
  bool GetAcceleratorAt(int index, int& key_code, bool& shift_pressed,
      bool& ctrl_pressed, bool& alt_pressed) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
