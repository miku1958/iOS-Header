//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)
+ (id)MCMakeUUID;
- (id)MCAppendDeviceName;
- (unsigned int)MCHash;
- (id)MCHashedFilenameWithExtension:(id)arg1;
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;
- (id)MCHashedIdentifier;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCSHA256DigestWithSalt:(id)arg1;
@end

