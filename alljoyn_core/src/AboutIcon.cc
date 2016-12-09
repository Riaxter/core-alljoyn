/******************************************************************************
 * Copyright (c) 2016 Open Connectivity Foundation (OCF) and AllJoyn Open
 *    Source Project (AJOSP) Contributors and others.
 *
 *    SPDX-License-Identifier: Apache-2.0
 *
 *    All rights reserved. This program and the accompanying materials are
 *    made available under the terms of the Apache License, Version 2.0
 *    which accompanies this distribution, and is available at
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Copyright 2016 Open Connectivity Foundation and Contributors to
 *    AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for
 *    any purpose with or without fee is hereby granted, provided that the
 *    above copyright notice and this permission notice appear in all
 *    copies.
 *
 *     THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 *     WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 *     WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 *     AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 *     DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 *     PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 *     TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 *     PERFORMANCE OF THIS SOFTWARE.
 ******************************************************************************/

#include <alljoyn/AboutIcon.h>
namespace ajn {


#ifndef AJ_NO_DEFAULT_ABOUT_ICON
/*
 * This is the AllJoyn logo as a PNG in color rendered at 50x50 pixels
 */
static uint8_t defaultIcon[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x32,
    0x08, 0x03, 0x00, 0x00, 0x00, 0x29, 0xe1, 0x78, 0x83, 0x00, 0x00, 0x01,
    0x3b, 0x50, 0x4c, 0x54, 0x45, 0x00, 0x00, 0x00, 0x32, 0xa3, 0x94, 0x0d,
    0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x0d,
    0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d,
    0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x0d, 0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x8b,
    0xce, 0xaf, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d,
    0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x1c, 0xbd, 0xbd, 0x8b,
    0xce, 0xaf, 0x0d, 0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x8b,
    0xce, 0xaf, 0x8b, 0xce, 0xaf, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x1c,
    0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d,
    0x85, 0x77, 0x0d, 0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c,
    0xbd, 0xbd, 0x0d, 0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x0d,
    0x85, 0x77, 0x0d, 0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c,
    0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x1c, 0xbd, 0xbd, 0x0d,
    0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x0d, 0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c,
    0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x0d, 0x85, 0x77, 0x1c,
    0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x8a, 0xcd, 0xaf, 0x0d,
    0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x8b, 0xce, 0xaf, 0x0d,
    0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x0d, 0x85, 0x77, 0x8b,
    0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x0d,
    0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x0d,
    0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x0d, 0x85, 0x77, 0x1c,
    0xbd, 0xbd, 0x0d, 0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x8b,
    0xce, 0xaf, 0x0f, 0x8d, 0x81, 0x13, 0x89, 0x7a, 0x8b, 0xce, 0xaf, 0x1c,
    0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x4d, 0xc5, 0xb7, 0x8b,
    0xce, 0xaf, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x8b,
    0xce, 0xaf, 0x0d, 0x85, 0x77, 0x8b, 0xce, 0xaf, 0x1c, 0xbd, 0xbd, 0x0d,
    0x85, 0x77, 0x1c, 0xbd, 0xbd, 0x8b, 0xce, 0xaf, 0x0b, 0x5a, 0x01, 0x9a,
    0x00, 0x00, 0x00, 0x66, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x02, 0x13, 0x0a,
    0xf7, 0xf7, 0xee, 0xd0, 0x3b, 0xf8, 0xe3, 0xd0, 0x65, 0x3d, 0x3c, 0x33,
    0x1b, 0x0f, 0x08, 0xfc, 0xfb, 0xec, 0xeb, 0xea, 0xe5, 0xe2, 0xdf, 0xcd,
    0xc9, 0xba, 0xa8, 0xa8, 0xa6, 0x99, 0x95, 0x8e, 0x88, 0x7f, 0x7e, 0x6d,
    0x68, 0x64, 0x56, 0x2e, 0x22, 0x21, 0x1c, 0x10, 0x0c, 0x08, 0xf1, 0xe7,
    0xdc, 0xd2, 0xc9, 0xc6, 0xc2, 0xbf, 0xaf, 0xaf, 0xa2, 0xa2, 0xa0, 0x93,
    0x8e, 0x86, 0x7d, 0x78, 0x72, 0x69, 0x60, 0x5c, 0x59, 0x55, 0x4e, 0x35,
    0x35, 0x2b, 0x29, 0x1d, 0x0f, 0xf2, 0xdc, 0xc1, 0xc0, 0xb9, 0xb9, 0xb0,
    0xb0, 0x96, 0x78, 0x78, 0x6c, 0x5f, 0x54, 0x4f, 0x4e, 0x2e, 0x29, 0x28,
    0x1b, 0x12, 0x27, 0x51, 0x44, 0xbc, 0x00, 0x00, 0x01, 0xfe, 0x49, 0x44,
    0x41, 0x54, 0x48, 0xc7, 0x95, 0x93, 0x67, 0x57, 0xe2, 0x40, 0x14, 0x40,
    0xdf, 0x04, 0x88, 0xd2, 0x04, 0x41, 0x74, 0x01, 0xb1, 0x60, 0x41, 0xc1,
    0xb2, 0xba, 0xba, 0x76, 0xd7, 0xb5, 0xec, 0xae, 0xdd, 0xed, 0xbd, 0x59,
    0x66, 0xe6, 0xff, 0xff, 0x02, 0x03, 0x49, 0xe6, 0x25, 0x4c, 0x1e, 0x89,
    0xf7, 0x53, 0xce, 0xcb, 0xb9, 0xc9, 0x3b, 0x37, 0x19, 0x08, 0x26, 0xf6,
    0xf3, 0xf7, 0x8f, 0x15, 0x78, 0x0a, 0x7f, 0x2b, 0x3b, 0xb0, 0xfd, 0xe1,
    0x5f, 0x74, 0xe1, 0xf6, 0x8b, 0x2c, 0x2e, 0xc2, 0xc2, 0x90, 0xf8, 0x7c,
    0x19, 0x4d, 0x58, 0x3e, 0x28, 0x4a, 0x79, 0x60, 0x5d, 0x4c, 0x0b, 0x31,
    0xf4, 0xea, 0x26, 0x5c, 0x60, 0x73, 0xc3, 0x52, 0xca, 0xe1, 0x65, 0xeb,
    0xf2, 0xa6, 0x24, 0x84, 0x28, 0xcd, 0xb3, 0x10, 0x63, 0xa0, 0x2a, 0xdb,
    0xcc, 0x41, 0x9b, 0x79, 0xd1, 0x26, 0x9d, 0xed, 0x25, 0x5c, 0x8f, 0xcb,
    0x0e, 0xeb, 0xcc, 0x7e, 0x63, 0x5a, 0x74, 0x18, 0x5b, 0xa2, 0x84, 0xd8,
    0x4c, 0x42, 0xda, 0x0c, 0x38, 0x93, 0xac, 0xb0, 0x89, 0xcf, 0x06, 0x07,
    0xff, 0x53, 0x91, 0x0e, 0x3b, 0x6a, 0xb6, 0x2d, 0x1c, 0xca, 0xa7, 0xba,
    0xf0, 0xff, 0x93, 0x74, 0x49, 0x2c, 0xaa, 0xe9, 0x42, 0x5c, 0xb8, 0x6c,
    0x5e, 0x76, 0x85, 0xfd, 0x5e, 0x94, 0x8a, 0xd7, 0x80, 0x4c, 0x2b, 0xc5,
    0x0a, 0xfe, 0xe0, 0x0f, 0x8b, 0x3c, 0x8b, 0x01, 0xf2, 0xfc, 0x85, 0x40,
    0x4a, 0xbf, 0x54, 0xf0, 0x75, 0xe9, 0xe5, 0x0d, 0x0a, 0x4e, 0x68, 0x24,
    0xed, 0x8e, 0x7d, 0x46, 0x55, 0x3d, 0x09, 0x43, 0x23, 0x9a, 0x82, 0x81,
    0x91, 0x6c, 0xa8, 0x32, 0xae, 0xb5, 0x1c, 0xa3, 0x14, 0x3d, 0x30, 0x86,
    0xa6, 0x14, 0x3d, 0x30, 0x86, 0xd6, 0x15, 0x22, 0x30, 0x86, 0x26, 0x14,
    0x0c, 0xac, 0xf1, 0xb6, 0x87, 0x52, 0x25, 0xce, 0xd0, 0x4b, 0x52, 0xc1,
    0xc0, 0x44, 0x68, 0x54, 0xc8, 0xc0, 0x18, 0x9a, 0x50, 0x12, 0xd7, 0xa4,
    0xb2, 0x14, 0x0f, 0x56, 0x66, 0x7c, 0xfb, 0xe7, 0x7c, 0xce, 0xac, 0xa6,
    0x68, 0x81, 0x73, 0xa3, 0xbc, 0x76, 0xe7, 0x0d, 0x5d, 0x0e, 0x52, 0xde,
    0x81, 0xc2, 0x98, 0xe4, 0x16, 0xc9, 0xa9, 0x41, 0x6f, 0x68, 0x5d, 0xd9,
    0xc0, 0x9d, 0x32, 0x26, 0xb7, 0x49, 0x35, 0x19, 0x86, 0xd6, 0x95, 0x0b,
    0xcf, 0x4e, 0xc8, 0xc7, 0x96, 0x3b, 0x3e, 0xd7, 0x94, 0x3d, 0xdc, 0xc9,
    0x4f, 0xdd, 0xdd, 0x6e, 0xb7, 0x4b, 0x49, 0xdc, 0xdb, 0xaf, 0x3f, 0x31,
    0x79, 0x37, 0x23, 0x19, 0xe6, 0x86, 0x46, 0x45, 0x05, 0xee, 0xef, 0xe3,
    0x41, 0x8c, 0xe6, 0x54, 0x68, 0x54, 0x2a, 0xed, 0xc0, 0xc6, 0x3e, 0xa7,
    0x98, 0x34, 0xac, 0xfb, 0x2b, 0x65, 0x54, 0x3a, 0x81, 0x59, 0x63, 0x95,
    0xd3, 0x98, 0x27, 0x0c, 0xe0, 0xd4, 0xa3, 0x6c, 0xe0, 0x4e, 0x24, 0x7d,
    0xfd, 0xc0, 0x36, 0x51, 0xb9, 0xc8, 0x4f, 0xf0, 0x70, 0xf6, 0xf3, 0xe7,
    0x4a, 0xd9, 0x3b, 0x7e, 0xcf, 0xa3, 0xb0, 0x7a, 0xbc, 0xeb, 0x2a, 0xdf,
    0x78, 0x54, 0xbe, 0xba, 0x0a, 0x6b, 0x98, 0x91, 0x04, 0xb3, 0xc1, 0x40,
    0x61, 0xd4, 0x23, 0x18, 0x75, 0x03, 0x7c, 0xb4, 0xb6, 0x42, 0x84, 0xad,
    0x16, 0x68, 0x34, 0x53, 0x9c, 0x26, 0xd5, 0x84, 0x20, 0x0a, 0x87, 0x49,
    0x42, 0x48, 0x1e, 0x16, 0x80, 0x80, 0xf8, 0x3c, 0x13, 0x79, 0x4a, 0x70,
    0x7f, 0x4c, 0xfd, 0xb3, 0xf7, 0x86, 0x65, 0x46, 0xb4, 0x5f, 0x3f, 0x94,
    0xc1, 0x29, 0x14, 0xf0, 0xf8, 0x87, 0x70, 0x55, 0x73, 0x8c, 0xda, 0x15,
    0x44, 0xe6, 0x6c, 0xcd, 0x12, 0xd6, 0xce, 0xe0, 0x29, 0x14, 0x8e, 0x52,
    0x47, 0x54, 0xd8, 0x47, 0x78, 0x54, 0xa8, 0x8c, 0x1e, 0x4a, 0x7f, 0x73,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};
#endif


AboutIcon::AboutIcon() : content(NULL), contentSize(0), mimetype(""), url(""), m_arg() {
#ifndef AJ_NO_DEFAULT_ABOUT_ICON
    SetContent("image/png", defaultIcon, sizeof(defaultIcon), false);
#endif
}

QStatus AboutIcon::SetContent(const char* iconMimeType, uint8_t* data, size_t csize, bool ownsData)
{
    QStatus status = this->m_arg.Set("ay", csize, data);
    if (status != ER_OK) {
        this->content = NULL;
        this->contentSize = 0;
        this->mimetype = "";
        this->m_arg.Clear();
    } else {
        this->mimetype = iconMimeType;
        this->content = data;
        this->contentSize = csize;
        if (ownsData) {
            this->m_arg.SetOwnershipFlags(MsgArg::OwnsData);
        }
    }
    return status;
}

QStatus AboutIcon::SetUrl(const char* iconMimeType, const char* iconUrl)
{
    this->mimetype = iconMimeType;
    this->url = iconUrl;
    return ER_OK;
}

void AboutIcon::Clear() {
    m_arg.Clear();
    content = NULL;
    contentSize = 0;
    mimetype = "";
    url = "";
}

QStatus AboutIcon::SetContent(const MsgArg& arg) {
    m_arg = arg;
    m_arg.Stabilize();
    return m_arg.Get("ay", &contentSize, &content);
}
}