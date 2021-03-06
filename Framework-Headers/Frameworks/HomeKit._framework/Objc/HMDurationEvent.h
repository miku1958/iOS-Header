//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMDurationEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    double _duration;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 duration:(double)arg2;
- (id)initWithDuration:(double)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setOffset:(double)arg1;
- (void)updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

