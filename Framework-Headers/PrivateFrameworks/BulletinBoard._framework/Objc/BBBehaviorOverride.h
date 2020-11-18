//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSArray;

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _overrideType;
    unsigned long long _mode;
    NSArray *_effectiveIntervals;
}

@property (copy, nonatomic) NSArray *effectiveIntervals; // @synthesize effectiveIntervals=_effectiveIntervals;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (nonatomic) unsigned long long overrideType; // @synthesize overrideType=_overrideType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned long long)arg2;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;
- (BOOL)isActiveForDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)nextOverrideTransitionDateAfterDate:(id)arg1;

@end
