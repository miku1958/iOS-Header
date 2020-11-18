//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSString, RMDevice, RMManagementSettings, RMUsageSettings, RMUser;

@interface RMUserDevicePairRecord : RMUniquedManagedObject
{
}

@property (copy, nonatomic) NSString *altURI; // @dynamic altURI;
@property (strong, nonatomic) RMManagementSettings *managementSettings; // @dynamic managementSettings;
@property (strong, nonatomic) RMDevice *sourceDevice; // @dynamic sourceDevice;
@property (strong, nonatomic) RMUser *sourceUser; // @dynamic sourceUser;
@property (copy, nonatomic) NSString *uri; // @dynamic uri;
@property (strong, nonatomic) RMUsageSettings *usageSettings; // @dynamic usageSettings;

+ (id)fetchRequestForUserDevicePairRecordsFromOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForUserDevicePairRecordsWithURI:(id)arg1;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 userDSID:(id)arg2 deviceIdentifier:(id)arg3;
+ (id)fetchRequestMatchingUserDevicePairsForLocalUserAndDeviceFromOrganizationWithIdentifier:(id)arg1;
- (id)computeUniqueIdentifier;

@end

