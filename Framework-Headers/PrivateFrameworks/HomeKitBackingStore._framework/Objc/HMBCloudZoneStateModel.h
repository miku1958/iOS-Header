//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class HMBCloudZone, HMBCloudZoneID, HMBCloudZoneRebuilderStatus, NSData, NSNumber, NSSet;

@interface HMBCloudZoneStateModel : HMBCloudStateModel
{
    HMBCloudZone *_cloudZone;
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
}

@property (weak) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property (strong, nonatomic) NSNumber *needsZoneCreation; // @dynamic needsZoneCreation;
@property (strong, nonatomic) NSNumber *needsZoneDeletion; // @dynamic needsZoneDeletion;
@property (strong, nonatomic) HMBCloudZoneRebuilderStatus *rebuilderStatus; // @synthesize rebuilderStatus=_rebuilderStatus;
@property (strong, nonatomic) NSSet *subscriptions;
@property (strong, nonatomic) NSData *subscriptionsData; // @dynamic subscriptionsData;
@property (strong, nonatomic) HMBCloudZoneID *zoneID; // @dynamic zoneID;

+ (id)hmbProperties;
- (void).cxx_destruct;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

@end
