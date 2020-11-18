//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMRoom.h>

#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFWallaperHost-Protocol.h>

@class HMCameraProfile, HMHome, NSArray, NSDate, NSSet, NSString, NSUUID, UIImage;

@interface HMRoom (HFDebugging) <HFStateDumpBuildable, HFWallaperHost, HFReorderableHomeKitObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *hf_allCameraProfiles;
@property (readonly, nonatomic) NSArray *hf_allServices;
@property (readonly, nonatomic) NSSet *hf_allVisibleServices;
@property (readonly, nonatomic) NSArray *hf_allZones;
@property (readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property (readonly, copy, nonatomic) NSString *hf_displayName;
@property (readonly, weak, nonatomic) HMCameraProfile *hf_unitaryCameraProfile;
@property (readonly, nonatomic) NSArray *hf_unpairedHomePods;
@property (readonly, nonatomic) NSArray *hf_visibleAccessories;
@property (readonly, nonatomic) UIImage *hf_wallpaperImage;
@property (readonly, weak, nonatomic) HMHome *home; // @dynamic home;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;
@end
