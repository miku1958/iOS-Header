//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceLocationDeviceFooterItem : HFItem
{
    BOOL _useSingleUserStyle;
    HULocationDeviceManager *_locationDeviceManager;
    HUPresenceCurrentUserLocationDevice *_selectedLocationDevice;
    HMHome *_home;
}

@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property (strong, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice; // @synthesize selectedLocationDevice=_selectedLocationDevice;
@property (nonatomic) BOOL useSingleUserStyle; // @synthesize useSingleUserStyle=_useSingleUserStyle;

- (void).cxx_destruct;
- (id)_homeHubNeedsUpdateWarningText;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;
- (id)_someUsersNeedSoftwareUpdateWarningText;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3 useSingleUserStyle:(BOOL)arg4;

@end

