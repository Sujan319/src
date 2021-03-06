// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FXJS_XFA_CJX_DATETIMEEDIT_H_
#define FXJS_XFA_CJX_DATETIMEEDIT_H_

#include "fxjs/xfa/cjx_node.h"

class CXFA_DateTimeEdit;

class CJX_DateTimeEdit : public CJX_Node {
 public:
  explicit CJX_DateTimeEdit(CXFA_DateTimeEdit* node);
  ~CJX_DateTimeEdit() override;

  JS_PROP(hScrollPolicy);
  JS_PROP(use);
  JS_PROP(usehref);
};

#endif  // FXJS_XFA_CJX_DATETIMEEDIT_H_
