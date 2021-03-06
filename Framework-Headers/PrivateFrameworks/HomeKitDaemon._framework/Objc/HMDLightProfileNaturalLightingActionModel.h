//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDActionModel.h>

@class NSNumber, NSSet, NSUUID;

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel
{
}

@property (strong) NSUUID *accessoryUUID; // @dynamic accessoryUUID;
@property (strong) NSUUID *lightProfileUUID; // @dynamic lightProfileUUID;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (strong) NSNumber *naturalLightingEnabledField; // @dynamic naturalLightingEnabledField;
@property (strong) NSSet *serviceUUIDs; // @dynamic serviceUUIDs;

+ (id)properties;
- (id)dependentUUIDs;

@end

