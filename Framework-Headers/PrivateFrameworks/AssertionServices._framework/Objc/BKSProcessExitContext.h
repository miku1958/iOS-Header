//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AssertionServices/BSXPCCoding-Protocol.h>
#import <AssertionServices/NSCopying-Protocol.h>
#import <AssertionServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSProcessExitContext : NSObject <BSXPCCoding, NSSecureCoding, NSCopying>
{
    unsigned long long _launchdExitReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long exitReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long launchdExitReason; // @synthesize launchdExitReason=_launchdExitReason;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

