//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSArray, NSString;

@interface HMDZoneModel : HMDBackingStoreModelObject
{
}

@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSArray *roomUUIDs; // @dynamic roomUUIDs;

+ (id)properties;
- (id)dependentUUIDs;

@end
