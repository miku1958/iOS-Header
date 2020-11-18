//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudShareGroup, NSMutableDictionary;

@interface HMDCloudHomeZone : HMDCloudZone
{
    BOOL _sharedHome;
    HMDCloudShareGroup *_shareGroup;
    NSMutableDictionary *_perUserShareGroups;
}

@property (readonly, nonatomic) NSMutableDictionary *perUserShareGroups; // @synthesize perUserShareGroups=_perUserShareGroups;
@property (strong, nonatomic) HMDCloudShareGroup *shareGroup; // @synthesize shareGroup=_shareGroup;
@property (readonly, nonatomic, getter=isSharedHome) BOOL sharedHome; // @synthesize sharedHome=_sharedHome;

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSharedRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;
- (void).cxx_destruct;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)arg1;
- (id)description;
- (BOOL)isRootRecord:(id)arg1;
- (void)setServerChangeToken:(id)arg1;

@end

