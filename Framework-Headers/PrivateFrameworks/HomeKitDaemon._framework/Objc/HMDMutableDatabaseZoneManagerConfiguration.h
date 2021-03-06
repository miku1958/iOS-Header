//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDDatabaseZoneManagerConfiguration.h>

@class HMBCloudZoneConfiguration, HMDHomeKitVersion, NSSet;

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration
{
}

@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // @dynamic cloudZoneConfiguration;
@property (copy) NSSet *externalRecordTypesForSubscriptions; // @dynamic externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion; // @dynamic minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures; // @dynamic requiredSupportedFeatures;
@property BOOL shouldCreateZone; // @dynamic shouldCreateZone;
@property (getter=isZoneOwner) BOOL zoneOwner; // @dynamic zoneOwner;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

