//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/HMCharacteristicEventProtocol-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic, HMNumberRange, NSString;

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying>
{
    HMNumberRange *_thresholdRange;
    HMCharacteristic *_characteristic;
}

@property (readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HMNumberRange *thresholdRange; // @synthesize thresholdRange=_thresholdRange;

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)isSupportedForHome:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateThresholdRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 characteristic:(id)arg2 thresholdRange:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setThresholdRange:(id)arg1;
- (void)updateThresholdRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

