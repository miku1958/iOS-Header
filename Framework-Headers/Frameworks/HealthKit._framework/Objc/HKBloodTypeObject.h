//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKBloodTypeObject : NSObject <NSCopying, NSSecureCoding>
{
    long long _bloodType;
}

@property (readonly) long long bloodType; // @synthesize bloodType=_bloodType;

+ (BOOL)supportsSecureCoding;
- (id)_initWithBloodType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

