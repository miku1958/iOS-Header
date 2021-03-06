//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBinaryPromise, AMSPromise, NSString, SSAuthenticateRequest;

@interface VUIAuthenticationManager : NSObject
{
    BOOL __isObservingAccountStoreChange;
    AMSPromise *__authPromise;
    AMSBinaryPromise *__signoutPromise;
    NSString *__accountIdentifier;
    SSAuthenticateRequest *__authRequest;
}

@property (strong, nonatomic) NSString *_accountIdentifier; // @synthesize _accountIdentifier=__accountIdentifier;
@property (strong, nonatomic) AMSPromise *_authPromise; // @synthesize _authPromise=__authPromise;
@property (strong, nonatomic) SSAuthenticateRequest *_authRequest; // @synthesize _authRequest=__authRequest;
@property (nonatomic) BOOL _isObservingAccountStoreChange; // @synthesize _isObservingAccountStoreChange=__isObservingAccountStoreChange;
@property (strong, nonatomic) AMSBinaryPromise *_signoutPromise; // @synthesize _signoutPromise=__signoutPromise;

+ (id)DSID;
+ (void)_performAuthenticationTask:(id)arg1 isSilent:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_performAuthenticationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_recordLog:(id)arg1 isSignOut:(BOOL)arg2 isSilent:(BOOL)arg3;
+ (void)_requestSSAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)_signInSSUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_signOutSSUserWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)_ssCreditsString;
+ (id)_ssDSID;
+ (BOOL)_useStoreServices;
+ (id)_userAccount;
+ (BOOL)_userHasActiveSSAccount;
+ (id)_userSSAccount;
+ (id)_userSSAccountName;
+ (id)_userSSFirstName;
+ (id)_userSSFullName;
+ (id)_userSSLastName;
+ (BOOL)allowsAccountModification;
+ (id)creditsString;
+ (id)identifier;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
+ (void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)signOutUserWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)userAccountName;
+ (id)userFirstName;
+ (id)userFullName;
+ (BOOL)userHasActiveAccount;
+ (id)userLastName;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;

@end

