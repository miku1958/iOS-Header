//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic;
@protocol NSCopying;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding>
{
    id<NSCopying> _triggerValue;
    HMCharacteristic *_characteristic;
}

@property (readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (copy, nonatomic) id<NSCopying> triggerValue; // @synthesize triggerValue=_triggerValue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)_updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
