//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDBackingStoreModelObject
{
}

@property (strong, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID; // @dynamic primaryNetworkRouterManagingDeviceUUID;

+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelNamespace;
+ (id)properties;
- (id)dependentUUIDs;

@end

