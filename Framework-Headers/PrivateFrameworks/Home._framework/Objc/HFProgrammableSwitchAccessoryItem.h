//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFCharacteristicWriteActionBuilderFactory-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFProgrammableSwitchAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFCharacteristicWriteActionBuilderFactory>
{
    HMAccessory *_accessory;
    id<HFCharacteristicValueSource> _valueSource;
}

@property (strong, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)allControlItems;
- (BOOL)containsActionableCharacteristics;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)primaryStateControlItem;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (BOOL)shouldReduceOptionItemsForNotifyingCharacteristics;

@end

