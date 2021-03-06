//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFCompoundItemProtocol-Protocol.h>
#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, HMHome, NSArray, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFAccessoryItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol>
{
    HMAccessory *_accessory;
    id<HFCharacteristicValueSource> _valueSource;
    NSSet *_serviceItems;
}

@property (readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSArray *allHomeKitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) id<HFHomeKitObject> primaryHomeKitObject;
@property (strong, nonatomic) NSSet *serviceItems; // @synthesize serviceItems=_serviceItems;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

- (void).cxx_destruct;
- (id)_buildControlDescription;
- (id)_buildControlItems;
- (id)_buildServiceItems;
- (id)_buildTileDescription:(BOOL)arg1;
- (id)_collectAllChildItems;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_sortDescriptorsForServiceItems;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)accessories;
- (BOOL)actionsMayRequireDeviceUnlock;
- (BOOL)containsActions;
- (id)controlItemsForService:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (BOOL)isMultiLightDevice;
- (BOOL)isMultiSensorDevice;
- (id)namingComponentForHomeKitObject;
- (id)serviceItemForService:(id)arg1;
- (id)serviceLikeBuilderInHome:(id)arg1;

@end

