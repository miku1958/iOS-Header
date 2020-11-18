//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSDate, NSNumber, NSString;

@interface ACAccount (ICAccountAdditions)

@property (copy, nonatomic, setter=ic_setDSID:) NSNumber *ic_DSID;
@property (nonatomic, getter=ic_isActiveLockerAccount, setter=ic_setActiveLockerAccount:) BOOL ic_activeLockerAccount;
@property (copy, nonatomic, setter=ic_setAgeVerificationExpirationDate:) NSDate *ic_ageVerificationExpirationDate;
@property (copy, nonatomic, setter=ic_setAltDSID:) NSString *ic_altDSID;
@property (readonly, nonatomic, getter=ic_isCloudBackupEnabled) BOOL ic_cloudBackupEnabled;
@property (copy, nonatomic, setter=ic_setFirstName:) NSString *ic_firstName;
@property (copy, nonatomic, setter=ic_setLastName:) NSString *ic_lastName;
@property (nonatomic, getter=ic_isManagedAppleID, setter=ic_setManagedAppleID:) BOOL ic_managedAppleID;
@property (nonatomic, getter=ic_isSandboxed, setter=ic_setSandboxed:) BOOL ic_sandboxed;
@property (copy, nonatomic, setter=ic_setStorefront:) NSString *ic_storefront;
@property (nonatomic, getter=ic_isSubscriptionStatusEnabled, setter=ic_setSubscriptionStatusEnabled:) BOOL ic_subscriptionStatusEnabled;
@property (copy, nonatomic, setter=ic_setUniqueIdentifier:) NSNumber *ic_uniqueIdentifier;

@end

