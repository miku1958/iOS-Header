//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSArray, NSNumber, NSString;

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject
{
}

@property (copy, nonatomic) NSArray *accessoryModelIDs; // @dynamic accessoryModelIDs;
@property (strong, nonatomic) NSString *changeTag; // @dynamic changeTag;
@property (copy, nonatomic) NSNumber *enabled; // @dynamic enabled;
@property (copy, nonatomic) NSNumber *options; // @dynamic options;

+ (id)properties;
- (id)dependentUUIDs;

@end

