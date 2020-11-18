//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HULocationDeviceManagerObserver-Protocol.h>

@class HFItem, HFItemProvider, HFUserItem, HMAssistantAccessControl, HMHome, HULocationDeviceManager, NAFuture, NSArray, NSSet, NSString;

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver>
{
    NSSet *_itemProviders;
    HMHome *_home;
    HFUserItem *_sourceItem;
    HFItemProvider *_devicesItemProvider;
    HFItem *_footerItem;
    HFItem *_personalRequestsToggleItem;
    HULocationDeviceManager *_locationDeviceManager;
}

@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFItemProvider *devicesItemProvider; // @synthesize devicesItemProvider=_devicesItemProvider;
@property (readonly, nonatomic) HFItem *footerItem; // @synthesize footerItem=_footerItem;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property (nonatomic, getter=isPersonalRequestsEnabled) BOOL personalRequestsEnabled;
@property (copy, nonatomic) NSArray *personalRequestsHomePods;
@property (readonly, nonatomic) HFItem *personalRequestsToggleItem; // @synthesize personalRequestsToggleItem=_personalRequestsToggleItem;
@property (readonly, nonatomic) HFUserItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)_createItemProviders;
- (BOOL)_showPersonalRequestsItems;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3;
- (BOOL)isItemPersonalRequestsDevice:(id)arg1;
- (BOOL)isItemPersonalRequestsFooter:(id)arg1;
- (BOOL)isItemPersonalRequestsToggle:(id)arg1;
- (void)locationDeviceManager:(id)arg1 didUpdateActiveLocationDevice:(id)arg2;
- (unsigned long long)personalRequestsAuthenticationRequirement;
- (void)registerForExternalUpdates;
- (void)toggleAllPersonalRequestsDevices;
- (void)unregisterForExternalUpdates;
- (id)updateLocationDeviceToThisDevice;

@end

