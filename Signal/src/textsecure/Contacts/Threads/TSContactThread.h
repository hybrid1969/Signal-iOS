//
//  TSContactThread.h
//  TextSecureKit
//
//  Created by Frederic Jacobs on 16/11/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TSThread.h"
#import "TSRecipient.h"

@interface TSContactThread : TSThread

+ (instancetype)getOrCreateThreadWithContactId:(NSString*)contactId transaction:(YapDatabaseReadWriteTransaction*)transaction;

- (NSString*)contactIdentifier;
- (TSRecipient *)recipientWithTransaction:(YapDatabaseReadTransaction*)transaction;

@end
