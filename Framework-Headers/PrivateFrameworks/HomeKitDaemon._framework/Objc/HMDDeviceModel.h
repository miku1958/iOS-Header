//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDHomeKitVersion, HMDRPIdentity, HMFProductInfo, NSArray, NSString, NSUUID;

@interface HMDDeviceModel : HMDBackingStoreModelObject
{
}

@property (readonly, nonatomic) NSArray *deviceHandles;
@property (strong, nonatomic) NSArray *handles; // @dynamic handles;
@property (strong, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) HMFProductInfo *productInfo; // @dynamic productInfo;
@property (strong, nonatomic) HMDRPIdentity *rpIdentity; // @dynamic rpIdentity;
@property (strong, nonatomic) HMDHomeKitVersion *version; // @dynamic version;

+ (id)properties;
- (BOOL)diff:(id)arg1 differingFields:(id *)arg2;

@end

