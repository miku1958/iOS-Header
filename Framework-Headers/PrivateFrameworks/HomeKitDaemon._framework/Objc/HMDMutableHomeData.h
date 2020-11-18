//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeData.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@class HMDAccount, HMDApplicationData, NSArray, NSString, NSUUID;

@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>
{
}

@property (copy, nonatomic) NSArray *UUIDsOfRemovedHomes; // @dynamic UUIDsOfRemovedHomes;
@property (nonatomic) BOOL accessAllowedWhenLocked; // @dynamic accessAllowedWhenLocked;
@property (copy, nonatomic) NSArray *accessories; // @dynamic accessories;
@property (strong, nonatomic) HMDAccount *account; // @dynamic account;
@property (copy, nonatomic) HMDApplicationData *applicationData; // @dynamic applicationData;
@property (nonatomic) unsigned long long assistantGenerationCounter; // @dynamic assistantGenerationCounter;
@property (copy, nonatomic) NSArray *cloudZones; // @dynamic cloudZones;
@property (copy, nonatomic) NSString *currentDevice; // @dynamic currentDevice;
@property (copy, nonatomic) NSUUID *dataTag; // @dynamic dataTag;
@property (nonatomic) long long dataVersion; // @dynamic dataVersion;
@property (copy, nonatomic) NSArray *homes; // @dynamic homes;
@property (copy, nonatomic) NSArray *incomingInvitations; // @dynamic incomingInvitations;
@property (copy, nonatomic) NSUUID *lastCurrentHomeUUID; // @dynamic lastCurrentHomeUUID;
@property (copy, nonatomic) NSArray *pendingReasonSaved; // @dynamic pendingReasonSaved;
@property (copy, nonatomic) NSArray *pendingUserManagementOperations; // @dynamic pendingUserManagementOperations;
@property (copy, nonatomic) NSUUID *primaryHomeUUID; // @dynamic primaryHomeUUID;
@property (copy, nonatomic) NSArray *remoteAccounts; // @dynamic remoteAccounts;
@property (nonatomic) long long residentEnabledState; // @dynamic residentEnabledState;
@property (nonatomic) long long schemaVersion; // @dynamic schemaVersion;
@property (copy, nonatomic) NSArray *unprocessedOperationIdentifiers; // @dynamic unprocessedOperationIdentifiers;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

