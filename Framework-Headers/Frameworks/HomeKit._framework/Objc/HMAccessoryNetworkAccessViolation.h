//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>
{
    NSDate *_lastViolationDate;
    NSDate *_lastResetDate;
}

@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;
@property (readonly) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
@property (readonly) NSDate *lastViolationDate; // @synthesize lastViolationDate=_lastViolationDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

