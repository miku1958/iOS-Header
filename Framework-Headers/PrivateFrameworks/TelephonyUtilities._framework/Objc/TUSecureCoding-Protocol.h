//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSSet;

@protocol TUSecureCoding <NSSecureCoding>
+ (NSSet *)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)archivedDataWithError:(id *)arg1;
@end

