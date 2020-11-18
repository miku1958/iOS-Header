//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import <HomeKitDaemon/HMDObjectLookupScanProtocol-Protocol.h>

@class HMDHomeManager, NSString;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHomeManager *_homeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_scanCloudZones;
- (void)_scanHomes;
- (id)initWithHomeManager:(id)arg1;
- (void)scanObjects;

@end
