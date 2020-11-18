//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAuthenticateRequest;

@interface VUIAuthenticationManager : NSObject
{
    BOOL __isObservingAccountStoreChange;
    SSAuthenticateRequest *__authRequest;
}

@property (strong, nonatomic) SSAuthenticateRequest *_authRequest; // @synthesize _authRequest=__authRequest;
@property (nonatomic) BOOL _isObservingAccountStoreChange; // @synthesize _isObservingAccountStoreChange=__isObservingAccountStoreChange;

+ (void)_performAuthenticationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_userAccount;
+ (BOOL)allowsAccountModification;
+ (void)requestAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
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

