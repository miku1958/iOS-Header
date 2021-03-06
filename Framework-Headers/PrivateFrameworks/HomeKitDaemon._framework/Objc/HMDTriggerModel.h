//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDDevice, HMDUser, NSArray, NSDate, NSNumber, NSString;

@interface HMDTriggerModel : HMDBackingStoreModelObject
{
}

@property (copy, nonatomic) NSNumber *active; // @dynamic active;
@property (strong, nonatomic) NSArray *currentActionSets; // @dynamic currentActionSets;
@property (copy, nonatomic) NSDate *mostRecentFireDate; // @dynamic mostRecentFireDate;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) HMDUser *owner; // @dynamic owner;
@property (strong, nonatomic) HMDDevice *owningDevice; // @dynamic owningDevice;

+ (id)properties;
- (id)createPayload;
- (id)dependentUUIDs;

@end

