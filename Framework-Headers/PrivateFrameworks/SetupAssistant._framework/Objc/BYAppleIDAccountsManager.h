//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AALoginPluginManager, AASetupAssistantService, AAStorableLoginContext;

@interface BYAppleIDAccountsManager : NSObject
{
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
    AASetupAssistantService *_aaService;
}

@property (strong, nonatomic, setter=setAAService:) AASetupAssistantService *aaService; // @synthesize aaService=_aaService;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearStoredLoginContext;
- (void)enableDataClassesForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(BOOL)arg4 onlyAppleIDPlugin:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)performSilentICDPUpgrade;
- (void)preloadDefaultLoginParametersWithBundleIDs:(id)arg1;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (id)storedLoginContext;

@end
