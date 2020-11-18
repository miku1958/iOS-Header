//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFItem, HMAccessory, HMHome, NSSet;

@interface HUTelevisionSettingsItemModule : HFItemModule
{
    NSSet *_itemProviders;
    HMHome *_home;
    HMAccessory *_accessory;
    HFItem *_showPowerModeSelectionItem;
}

@property (readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) HFItem *showPowerModeSelectionItem; // @synthesize showPowerModeSelectionItem=_showPowerModeSelectionItem;

+ (id)_powerModeSelectionCharacteristicForAccessory:(id)arg1;
+ (BOOL)_supportsAccessory:(id)arg1;
- (void).cxx_destruct;
- (void)_createItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 accessory:(id)arg3;
- (id)itemProviders;
- (id)showPowerModeSelection;

@end
