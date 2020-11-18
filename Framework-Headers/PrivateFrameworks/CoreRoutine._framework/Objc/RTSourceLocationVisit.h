//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTSource.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTSourceLocationVisit : RTSource <NSCopying, NSSecureCoding>
{
    long long _locationOfInterestType;
}

@property (readonly, nonatomic) long long locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterestType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

