/******************************************************************************
 *    Copyright (c) Open Connectivity Foundation (OCF), AllJoyn Open Source
 *    Project (AJOSP) Contributors and others.
 *    
 *    SPDX-License-Identifier: Apache-2.0
 *    
 *    All rights reserved. This program and the accompanying materials are
 *    made available under the terms of the Apache License, Version 2.0
 *    which accompanies this distribution, and is available at
 *    http://www.apache.org/licenses/LICENSE-2.0
 *    
 *    Copyright (c) Open Connectivity Foundation and Contributors to AllSeen
 *    Alliance. All rights reserved.
 *    
 *    Permission to use, copy, modify, and/or distribute this software for
 *    any purpose with or without fee is hereby granted, provided that the
 *    above copyright notice and this permission notice appear in all
 *    copies.
 *    
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 *    WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 *    AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 *    DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 *    PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 *    TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 *    PERFORMANCE OF THIS SOFTWARE.
******************************************************************************/

#ifndef ABOUTCLIENTSESSIONJOINER_H_
#define ABOUTCLIENTSESSIONJOINER_H_

#include <alljoyn/about/AboutClient.h>
#include <alljoyn/BusAttachment.h>
#include "AboutClientSessionListener.h"

typedef void (*SessionJoinedCallback)(qcc::String const& busName, ajn::SessionId id);

struct SessionJoinerContext {
    qcc::String busName;
    AboutClientSessionListener* aboutClientSessionListener;

    SessionJoinerContext(qcc::String name, AboutClientSessionListener* absl) :
        busName(name), aboutClientSessionListener(absl) { }
};

class AboutClientSessionJoiner : public ajn::BusAttachment::JoinSessionAsyncCB {

  public:

    AboutClientSessionJoiner(ajn::BusAttachment& bus, const qcc::String& busName, SessionJoinedCallback callback = 0);

    virtual ~AboutClientSessionJoiner();

    void JoinSessionCB(QStatus status, ajn::SessionId id, const ajn::SessionOpts& opts, void* context);

  private:
    /* Private assigment operator - does nothing */
    AboutClientSessionJoiner operator=(const AboutClientSessionJoiner&);

    ajn::BusAttachment& bus;

    qcc::String m_BusName;

    SessionJoinedCallback m_Callback;
};

#endif /* ABOUTCLIENTSESSIONJOINER_H_ */