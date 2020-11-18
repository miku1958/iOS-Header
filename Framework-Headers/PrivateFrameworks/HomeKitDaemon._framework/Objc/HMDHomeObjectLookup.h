//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import <HomeKitDaemon/HMDObjectLookupScanProtocol-Protocol.h>

@class HMDHome, NSString;

@interface HMDHomeObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHome *_home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_scanAccessoriesAndServices;
- (void)_scanActionSets;
- (void)_scanResidentDevices;
- (void)_scanRooms;
- (void)_scanServiceGroups;
- (void)_scanSetting:(id)arg1;
- (void)_scanSettingGroup:(id)arg1;
- (void)_scanTriggers;
- (void)_scanUsers;
- (void)_scanZones;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scanObjects;

@end

