//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class CAMediaTimingFunction, NSString;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding>
{
    double _duration;
    double _delay;
    double _frameInterval;
    CAMediaTimingFunction *_timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double frameInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (void)_setDelay:(double)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setFrameInterval:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpringAnimation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

