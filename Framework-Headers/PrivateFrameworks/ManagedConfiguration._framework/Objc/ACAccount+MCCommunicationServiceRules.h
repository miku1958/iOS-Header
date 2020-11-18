//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSDictionary, NSNumber, NSString;

@interface ACAccount (MCCommunicationServiceRules)

@property (strong, nonatomic) NSDictionary *communicationServiceRules;
@property (strong, nonatomic) NSString *mcAccountIdentifier;
@property (strong, nonatomic) NSString *mcConfigurationProfileIdentifier;
@property (strong, nonatomic) NSNumber *mcEASAccountEnableNotes;
@property (strong, nonatomic) NSNumber *mcEnableCalendarsUserOverridable;
@property (strong, nonatomic) NSNumber *mcEnableContactsUserOverridable;
@property (strong, nonatomic) NSNumber *mcEnableMailUserOverridable;
@property (strong, nonatomic) NSNumber *mcEnableNotesUserOverridable;
@property (strong, nonatomic) NSNumber *mcEnableRemindersUserOverridable;
@property (strong, nonatomic) NSString *mcPayloadUUID;
@property (strong, nonatomic) NSString *mcProfileUUID;

- (BOOL)MCIsManaged;
- (id)mcBackingPayload;
- (id)mcBackingProfile;
- (BOOL)mc_isUserEnrollmentAccount;
- (void)unenrollAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
@end
