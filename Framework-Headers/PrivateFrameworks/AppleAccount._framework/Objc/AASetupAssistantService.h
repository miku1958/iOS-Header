//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AASigningSession, ACAccount, NSDate, NSOperationQueue, NSString;

@interface AASetupAssistantService : NSObject
{
    NSOperationQueue *_requesterQueue;
    NSString *_appleID;
    NSString *_password;
    NSString *_emailChoice;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

@property (copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property (copy, nonatomic) NSString *emailChoice; // @synthesize emailChoice=_emailChoice;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;
- (void).cxx_destruct;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg1;
- (id)_signingSession;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
- (void)createAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handlerWithResponse:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)downloadURLConfiguration:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (void)loginDelegatesWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)shouldPresentUpgradeFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(CDUnknownBlockType)arg1;

@end

