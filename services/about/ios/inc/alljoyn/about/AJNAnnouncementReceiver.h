/******************************************************************************
 * Copyright (c) 2013-2014, AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 ******************************************************************************/

#import <Foundation/Foundation.h>
#import "AJNBusAttachment.h"
#import "AJNAnnouncementListener.h"

/**
 AJNAnnouncementReceiver enable registering an announcement listener to receive org.alljoyn.about Announce signals
 */
@interface AJNAnnouncementReceiver : NSObject

/**
 Designated initializer.
 Create an AJNAnnouncementReceiver Object using the passed announcementListener an an AJNBusAttachment.
 @param announcementListener A reference to an announcement listener.
 @param bus A reference to the AJNBusAttachment.
 @return ER_OK if successful.
 */
- (id)initWithAnnouncementListener:(id <AJNAnnouncementListener> )announcementListener andBus:(AJNBusAttachment *)bus;

/**
 Register the announcement listener to receive org.alljoyn.about Announce signals.
 
 The handler is only called if all the interfaces are implemented.
 For example, if the handler should be called if both "com.example.Audio"
 *and* "com.example.Video" are implemented then call
 addAnnouncementHandler once:
     const char* interfaces[] = {"com.example.Audio", "com.example.Video"};
     RegisterAnnounceHandler(busAttachment, handler, interfaces,
                             sizeof(interfaces) / sizeof(interfaces[0]));
 
 If the handler should be called if "com.example.Audio" *or*
 "com.example.Video" is implemented then call
 addAnnouncementHandler multiple times:
     const char* audioInterface[] = {"com.example.Audio"};
     RegisterAnnounceHandler(busAttachment, handler, audioInterface,
                             sizeof(audioInterface) / sizeof(audioInterface[0]));
     const char* videoInterface[] = {"com.example.Video"};
     RegisterAnnounceHandler(busAttachment, handler, videoInterface,
                             sizeof(videoInterface) / sizeof(videoInterface[0]));
 
 The interface name may be a prefix followed by a *.  Using
 this, the example above could be written as:
     const char* exampleInterface[] = {"com.example.*"};
     RegisterAnnounceHandler(busAttachment, handler, exampleInterface,
                             sizeof(exampleInterface) / sizeof(exampleInterface[0]));
 The handler will receive any announcement that implements an interface
 beginning with the "com.example." name.
 
 If the same handler is used for for multiple interfaces then it is the
 handlers responsibility to parse through the reported interfaces to
 figure out what should be done in response to the Announce signal.

 @param interfaces A list of interfaces that the Announce signal reports as implmented.
               NULL to recieve all Announce signals regardless of interfaces
 @param numberInterfaces the number of interfaces in the interfaces list
 @return ER_OK if successful.
 */
- (QStatus)registerAnnouncementReceiverForInterfaces:(const char **)interfaces withNumberOfInterfaces:(size_t)numOfInterfaces;

/**
 Unregister the announcement listener from receiving org.alljoyn.about Announce signal.
 @param interfaces A list of interfaces that the Announce signal reports as implmented.
               NULL to recieve all Announce signals regardless of interfaces
 @param numberInterfaces the number of interfaces in the interfaces list
 @return ER_OK if successful.
 */
- (QStatus)unRegisterAnnouncementReceiverForInterfaces:(const char  **)interfaces withNumberOfInterfaces:(size_t)numOfInterfaces;

@end
