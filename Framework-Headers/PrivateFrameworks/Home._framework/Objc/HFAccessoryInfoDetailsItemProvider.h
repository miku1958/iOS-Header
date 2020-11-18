//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFAccessoryInfoItem, HMAccessory, HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider
{
    HMHome *_home;
    id<HFCharacteristicValueSource> _valueSource;
    NSMutableSet *_accessoryInfoDetailItems;
    HMAccessory *_accessory;
    HFAccessoryInfoItem *_firmwareItem;
    HFAccessoryInfoItem *_softwareItem;
    HFAccessoryInfoItem *_wifiItem;
}

@property (strong, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (strong, nonatomic) NSMutableSet *accessoryInfoDetailItems; // @synthesize accessoryInfoDetailItems=_accessoryInfoDetailItems;
@property (readonly, nonatomic) HFAccessoryInfoItem *firmwareItem; // @synthesize firmwareItem=_firmwareItem;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) HFAccessoryInfoItem *softwareItem; // @synthesize softwareItem=_softwareItem;
@property (strong, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property (readonly, nonatomic) HFAccessoryInfoItem *wifiItem; // @synthesize wifiItem=_wifiItem;

+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;
+ (CDUnknownBlockType)accessoryInfoServiceDetailComparator;
+ (id)preferredCharacteristicOrderArray;
- (void).cxx_destruct;
- (BOOL)canToggleAccessoryInfoItem:(id)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 accessory:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)toggleAccessoryInfoItem:(id)arg1;

@end
