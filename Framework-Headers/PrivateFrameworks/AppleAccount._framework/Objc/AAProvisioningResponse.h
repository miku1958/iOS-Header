//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AAProvisioningResponse : AAAuthenticationResponse
{
    NSDictionary *_icloud;
}

@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (readonly, nonatomic, getter=isCloudDocsMigrated) BOOL cloudDocsMigrated;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic, getter=isFamilyEligible) BOOL familyEligible;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *fmipAppToken;
@property (readonly, nonatomic) NSString *fmipAuthToken;
@property (readonly, nonatomic) NSString *fmipSiriToken;
@property (readonly, nonatomic) NSString *iCloudAuthToken;
@property (readonly, nonatomic) NSString *keyTransparencyToken;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic, getter=isNotesMigrated) BOOL notesMigrated;
@property (readonly, nonatomic, getter=hasOptionalTerms) BOOL optionalTerms;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSNumber *primaryEmailVerified;
@property (readonly, nonatomic) NSArray *provisionedDataclasses;
@property (readonly, nonatomic) NSDictionary *regionInfo;
@property (readonly, nonatomic, getter=isRemindersMigrated) BOOL remindersMigrated;
@property (readonly, nonatomic, getter=isSandboxAccount) BOOL sandboxAccount;
@property (readonly, nonatomic) NSString *searchPartyToken;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

