//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

@class HMDHome;

@interface HMDHomeObjectLookup : HMDObjectLookup
{
    HMDHome *_home;
}

@property (weak) HMDHome *home; // @synthesize home=_home;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_scanAccessoriesAndServices;
- (void)_scanActionSets;
- (void)_scanMediaSystems;
- (void)_scanResidentDevices;
- (void)_scanRooms;
- (void)_scanServiceGroups;
- (void)_scanSettings:(id)arg1;
- (void)_scanTriggers;
- (void)_scanUsers;
- (void)_scanZones;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (void)scanObjects;

@end

