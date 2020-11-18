//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NSCopying-Protocol.h>

@class HMAccessory;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryBatteryLevelItem : HFItem <NSCopying>
{
    HMAccessory *_accessory;
    id<HFCharacteristicValueSource> _valueSource;
}

@property (readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;

@end

