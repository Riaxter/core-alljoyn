////////////////////////////////////////////////////////////////////////////////
//    Copyright (c) Open Connectivity Foundation (OCF), AllJoyn Open Source
//    Project (AJOSP) Contributors and others.
//
//    SPDX-License-Identifier: Apache-2.0
//
//    All rights reserved. This program and the accompanying materials are
//    made available under the terms of the Apache License, Version 2.0
//    which accompanies this distribution, and is available at
//    http://www.apache.org/licenses/LICENSE-2.0
//
//    Copyright (c) Open Connectivity Foundation and Contributors to AllSeen
//    Alliance. All rights reserved.
//
//    Permission to use, copy, modify, and/or distribute this software for
//    any purpose with or without fee is hereby granted, provided that the
//    above copyright notice and this permission notice appear in all
//    copies.
//
//    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
//    WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
//    AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
//    DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
//    PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
//    TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
//    PERFORMANCE OF THIS SOFTWARE.
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
#import "AJNCryptoECC.h"
#import "AJNObject.h"

/**
 * NIST P-256 ECC KeyInfo
 */
@interface AJNKeyInfoNISTP256 : AJNObject

/**
 * Get the ECCPublicKey from the KeyInfo
 * @return pointer to the KeyInfo ECCPublicKey
 */
@property (nonatomic, readonly) AJNECCPublicKey *publicKey;

/**
 * Get the size of the public key in bytes.
 * @return the size of the public key in bytes.
 */
@property (nonatomic, readonly) size_t publicSize;

/**
 * The required size of the exported byte array.
 * @return the required size of the exported byte array
 */
@property (nonatomic, readonly) size_t exportSize;

/**
 * Checks if this key is initialized properly.
 * @return true if this key info is not initialized.
 */
@property (nonatomic, readonly) BOOL isEmpty;

- (id)init;

/**
 * Set the ECCPublicKey
 *
 * @param[in] key the AJNECCPublicKey
 */
- (void)setPublicKey:(AJNECCPublicKey *)key;

/**
 * Export the KeyInfo data to a byte array.
 * @param[in,out] buf the pointer to a byte array.  The caller must allocate enough memory based on call GetExportSize().
 * @return ER_OK for success; otherwise, an error code
 */
- (QStatus)export:(uint8_t *)buf;

/**
 * Import a byte array generated by a KeyInfo Export.
 * @param buf the export data
 * @param count the size of the export data
 * @return ER_OK for success; otherwise, an error code
 */
- (QStatus)import:(uint8_t*)buf count:(size_t)count;

/**
 * A String representation of the KeyInfoNISTP256
 * @return A String representation of the KeyInfoNISTP256
 */
- (NSString*)description;

/**
 * Comparison operators equality
 * @param[in] toKeyInfo the AJNKeyInfoNISTP256 to compare with
 * @return true is keys are equal
 */
- (BOOL)isEqual:(AJNKeyInfoNISTP256 *)toKeyInfo;

/**
 * Comparison operators non-equality
 * @param[in] toKeyInfo the AJNKeyInfoNISTP256 to compare with
 * @return true is keys are not equal
 */
- (BOOL)isNotEqual:(AJNKeyInfoNISTP256 *)toKeyInfo;

/**
 * The less than operator for the KeyInfoNISTP256
 *
 * @param[in] otherKeyInfo the KeyInfoNISTP256 to compare
 *
 * @return True if the AJNKeyInfoNISTP256 is less than otherKeyInfo
 * false otherwise.
 */
- (BOOL)isLessThan:(AJNKeyInfoNISTP256 *)otherKeyInfo;

@end
