//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@interface HMDCloudHomeManagerZone : HMDCloudZone
{
}

+ (void)createHomeManagerZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)arg1;
- (void)setServerChangeToken:(id)arg1;

@end

