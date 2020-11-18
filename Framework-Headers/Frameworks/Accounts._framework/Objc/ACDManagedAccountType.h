//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString;

@interface ACDManagedAccountType : NSManagedObject
{
}

@property (strong, nonatomic) NSSet *accessKeys; // @dynamic accessKeys;
@property (strong, nonatomic) NSString *accountTypeDescription; // @dynamic accountTypeDescription;
@property (strong, nonatomic) NSSet *accounts; // @dynamic accounts;
@property (strong, nonatomic) NSString *credentialProtectionPolicy; // @dynamic credentialProtectionPolicy;
@property (strong, nonatomic) NSString *credentialType; // @dynamic credentialType;
@property (strong, nonatomic) NSNumber *encryptAccountProperties; // @dynamic encryptAccountProperties;
@property (strong, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong, nonatomic) NSString *owningBundleID; // @dynamic owningBundleID;
@property (strong, nonatomic) NSSet *permission; // @dynamic permission;
@property (strong, nonatomic) NSSet *supportedDataclasses; // @dynamic supportedDataclasses;
@property (strong, nonatomic) NSNumber *supportsAuthentication; // @dynamic supportsAuthentication;
@property (strong, nonatomic) NSNumber *supportsMultipleAccounts; // @dynamic supportsMultipleAccounts;
@property (strong, nonatomic) NSSet *syncableDataclasses; // @dynamic syncableDataclasses;
@property (strong, nonatomic) NSNumber *visibility; // @dynamic visibility;

@end

