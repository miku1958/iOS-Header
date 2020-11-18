//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSString, STCoreUser;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>
{
}

@property (nonatomic) BOOL allLimitsEnabled; // @dynamic allLimitsEnabled;
@property (nonatomic) long long communicationPolicy; // @dynamic communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy; // @dynamic communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState; // @dynamic contactManagementState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL needsToSetPasscode; // @dynamic needsToSetPasscode;
@property (copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property (readonly) Class superclass;
@property (strong, nonatomic) STCoreUser *user; // @dynamic user;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;
- (void)_changeAppLimitsFromAskToWarn:(id)arg1;
- (id)dictionaryRepresentation;
- (id)redactedDescription;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

@end
